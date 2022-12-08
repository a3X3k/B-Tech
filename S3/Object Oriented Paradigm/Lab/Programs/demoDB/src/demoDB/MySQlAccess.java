package demoDB;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class MySQlAccess {
	
	 	private Connection connect = null;
	    private Statement statement = null;
	    private PreparedStatement preparedStatement = null;
	    private ResultSet resultSet = null;
	    
	   
	    public void readDataBase() throws Exception {
	        try {
	            // This will load the MySQL driver, each DB has its own driver
	        	Class.forName("org.postgresql.Driver");
	            // Setup the connection with the DB
	        	connect = DriverManager.getConnection("jdbc:postgresql://localhost:5432/batch",
	                    "postgres", "1");

	            // Statements allow to issue SQL queries to the database
	            statement = connect.createStatement();
	            // Result set get the result of the SQL query
	            resultSet = statement
	                    .executeQuery("select * from student");
	            writeResultSet(resultSet);
	
	            // PreparedStatements can use variables and are more efficient
	            preparedStatement = connect
	                    .prepareStatement("insert into  student values (?, ?, ?, ?)");
	            
	            
	            // Parameters start with 1
	            preparedStatement.setString(1, "5");
	            preparedStatement.setString(2, "xyz");
	            preparedStatement.setString(3, "21");
	            preparedStatement.setString(4, "kl");
	           
	            preparedStatement.executeUpdate();

	            preparedStatement = connect
	                    .prepareStatement("SELECT rollno, name, age, state from student");
	            resultSet = preparedStatement.executeQuery();
	            writeResultSet(resultSet);
	            // Remove again the insert comment
	            preparedStatement = connect
	            .prepareStatement("delete from student where rollno= ? ; ");
	            preparedStatement.setString(1, "2");
	            preparedStatement.executeUpdate();
	            resultSet = statement
	            .executeQuery("select * from student");
	            writeMetaData(resultSet);
	        } catch (Exception e) {
	            throw e;
	        } finally {
	            close();
	        }
	        }
	    
	    private void writeMetaData(ResultSet resultSet) throws SQLException {
	        //  Now get some metadata from the database
	        // Result set get the result of the SQL query
	        System.out.println("The columns in the table are: ");
	        System.out.println("Table: " + resultSet.getMetaData().getTableName(1));
	        for  (int i = 1; i<= resultSet.getMetaData().getColumnCount(); i++){
	            System.out.println("Column " +i  + " "+ resultSet.getMetaData().getColumnName(i));
	        }
	    }

	    private void writeResultSet(ResultSet resultSet) throws SQLException {
	        // ResultSet is initially before the first data set
	        while (resultSet.next()) {
	            // It is possible to get the columns via name
	            // also possible to get the columns via the column number
	            // which starts at 1
	            // e.g. resultSet.getSTring(2);
	            int rno = resultSet.getInt("rollno");
	            String name = resultSet.getString("name");
	            int age = resultSet.getInt("age");
	            String state = resultSet.getString("state");
	           
	            System.out.println("rollno: " + rno);
	            System.out.println("name: " + name);
	            System.out.println("age: " + age);
	            System.out.println("state: " + state);
	            
	        }

}
	private void close() {
        try {
            if (resultSet != null) {
                resultSet.close();
            }
            
            if (statement != null) {
                statement.close();
            }
            
            if (connect != null) {
                connect.close();
            }
            
        } catch (Exception e) {
        }
    }
}