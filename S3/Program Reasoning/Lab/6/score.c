/*  
    AM.EN.U4CSE19147 S.ABHISHEK 
    AM.EN.U4CSE19123 HARSHA SATHISH
    AM.EN.U4CSE19109 ARVIND KUMAR K 
*/

struct Player 
{
  char name[10];
  int age;
  int n_mat;
  float bat_avg;
  float bowl_avg;
  char majorhanded;
};


struct Batsman 
{
 char name[10];
 int rank;
 int balls_faced;
 int runs_scored;
 float strike_rate,runrate;
 int num_dots,num_fours,num_sixes;
};

struct Bowler 
{
  char name[20];
  float overs_bowled;
  int conceaded;
  int wickets;
  float economy;
  int noballs;
  int wides;
  int maiden;
};

struct Team 
{
  struct Player player[11];
  int team_rank;
  char team_sponsor[20];
  char team_name[20];
  char captain[20];

};

struct Scorecard 
{
  int innings;
  struct Team team[2];
  char current_team[11];
  int team_scr;
  int wckt;
  float total_ovr;
  float bowler_ovr;
  float cur_rr;
  float req_rr;
  int target;
  int num_extras;
  struct Batsman striker;
  struct Batsman runner;
  struct Bowler bowler;  
};

struct Over 
{
  int over_number;
  int tot_ovr;
  int balls_bowled;
  char bowler[20] ;
  int wickets;
  int runs_scored;
};

struct Scorecard score;
struct Team tm;
struct Bowler bwr;
struct Batsman bat;
struct Player py;
struct Over ovr;

/*@

 requires currentball >= 0 && currentball <=6; 
 requires currentballrun >= 0 && currentballrun <=6;
 requires score.innings == 1 || score.innings == 2;
 requires score.team_scr >= 0 && score.team_scr <= 600;
 requires score.cur_rr >=0 && score.cur_rr <=10000;
 requires score.req_rr >=0 && score.req_rr <=10000;
 requires bat.num_sixes>=0 && bat.num_fours>=0 && bat.num_dots>=0;
 requires bat.num_sixes<=10000 && bat.num_fours<=100000 && bat.num_dots<=100000;	
 requires ovr.over_number >=0 && ovr.over_number <=100000;
 requires score.target >= 0 && score.target <=100000;	
 requires ovr.tot_ovr >= 0 && ovr.tot_ovr <=100000;
 requires ovr.over_number >= 0 && ovr.over_number <=1000;
ensures ovr.tot_ovr >= 0 && ovr.tot_ovr <=100000;
ensures ovr.over_number >= 0 && ovr.over_number <=1000;
ensures currentball >= 0 && currentball <=6; 
ensures currentballrun >= 0 && currentballrun <=6;
ensures score.innings == 1 || score.innings == 2;
ensures score.team_scr >= 0 && score.team_scr <= 600;
ensures bat.num_sixes>=0 && bat.num_fours>=0 && bat.num_dots>=0;
ensures bat.num_sixes<=10000 && bat.num_fours<=100000 && bat.num_dots<=100000;
ensures ovr.over_number >=0 && ovr.over_number <=100000;
ensures score.target >= 0 && score.target <=100000;
ensures score.team_scr >= 0 && score.team_scr <=100000;
ensures score.req_rr >=0 && score.req_rr <=10000;
*/

void update( int currentball, int currentballrun )
{
	if(score.innings == 1)
	{
		score.cur_rr = (float)score.team_scr/(float)score.bowler_ovr;
		score.req_rr = 0.0;
	}
	/*else if(score.innings == 2 && ovr.tot_ovr >0 && ovr.over_number>0 )
	{
		score.cur_rr = score.team_scr/score.bowler_ovr;
		score.req_rr = (score.target - score.team_scr) / ( ovr.tot_ovr - ovr.over_number);
	}
	
	/*if(currentballrun == 6 )
	{
		bat.sixes += 1;
		int temp =bat.sixes;
	}
	else if(currentballrun == 4 )
		bat.fours += 1;
		int temp1 =bat.fours;
	else if(currentballrun == 0 )
		bat.dots += 1;
		int temp2 =bat.dots;
	score.team_scr += currentballrun;
	if( currentball == 6)
	{
		ovr.over_number += 1;
		currentball = 0;
	}*/
}

/*@   requires currentballrun >=0 && currentballrun <=6;
	ensures (currentballrun==6) ==> \result == \old(bat.num_sixes) + 1 &&
			score.team_scr == \old(score.team_scr) + currentballrun;
	ensures (currentballrun!=6) ==> \result == -1;
*/
int six(int currentballrun)
{
	if(currentballrun == 6)
	{
		bat.num_sixes++;
		score.team_scr=score.team_scr+currentballrun;
		return bat.num_sixes;
	}
	else
	{
		return -1;
	}
}

/*@   requires currentballrun >=0 && currentballrun <=4;
	ensures (currentballrun==4) ==> \result == \old(bat.num_fours) + 1  &&
			score.team_scr == \old(score.team_scr) + currentballrun;
	ensures (currentballrun!=4) ==> \result == -1;
*/
int four(int currentballrun)
{
	if(currentballrun == 4)
	{
		bat.num_fours++;
		score.team_scr=score.team_scr+currentballrun;
		return bat.num_fours;
	}
	else
	{
		return -1;
	}
}

/*@   requires currentballrun >=0 && currentballrun <=1;
	ensures (currentballrun==0) ==> \result == \old(bat.num_dots) + 1;
	ensures (currentballrun!=0) ==> \result == -1;
*/
int dots(int currentballrun)
{
	if(currentballrun == 0)
	{
		bat.num_dots++;
		return bat.num_dots;
	}
	else
	{
		return -1;
	}
}

/*@   requires currentballrun >=0 && currentballrun <=6;
	requires  wicfall>=0 &&  wicfall<=1;
	ensures (wicfall==1) ==> bwr.wickets == \old(bwr.wickets)+1 && 
							score.wckt == \old(score.wckt)+1 && 
							score.team_scr == \old(score.team_scr)+0; 
	ensures (wicfall !=1 ) ==> score.team_scr == \old(score.team_scr) + currentballrun;
*/

void wicket(int wicfall,int currentballrun)
{
	if(wicfall==1)
	{
		bwr.wickets++;
		score.wckt++;
		score.team_scr=score.team_scr+0;
	}
	else
	{
		score.team_scr=score.team_scr+currentballrun;
	}
}

/*@   requires currentballrun >=0 && currentballrun <=6;
	ensures (currentballrun > 0 ) ==> score.team_scr == \old(score.team_scr) + currentballrun;
	ensures (currentballrun < 1 ) ==> score.team_scr == \old(score.team_scr) + 0;
*/
void inc_run(int currentballrun)
{
	if(currentballrun > 0)
	{
		score.team_scr=score.team_scr+currentballrun;
	}
	else
	{
		score.team_scr=score.team_scr+0;
	}
}

/*@   requires currentballrun >=0 && currentballrun <=6;
	requires currentball >=0 && currentball <=6;
	requires  wide>=0 &&  wide<=1;
	ensures (wide == 1 ) ==> score.team_scr == \old(score.team_scr) + currentballrun+1
		&& score.num_extras == \old(score.num_extras)+1 && \result == 0;
	ensures (wide != 1 ) ==>  \result == -1;
*/
int extras(int currentball, int currentballrun,int wide)
{
	if(wide==1)
	{
		score.team_scr=score.team_scr+currentballrun+1;
		score.num_extras++;
		return 0;
	}
	else
	{
		return -1;
	}
}

/*@   requires score.target>=0 && score.target <= 100000;
	requires score.team_scr>=0 && score.team_scr<= 100000;
	ensures \result == score.target - score.team_scr+1;
*/
int runs_req(int rem_score)
{
	return score.target - score.team_scr+1;
}

/*@
	requires rs<=6 && rs>=0 && \valid(bat) 
		&& 0<=bat->runs_scored<=100000
		&& 0<bat->balls_faced<100000
		&& bat->runs_scored<=6*bat->balls_faced;
	ensures bat->runs_scored>=\old(bat->runs_scored)
		&& bat->balls_faced==\old(bat->balls_faced)+1;
	behavior four:
		assumes rs==4;
		ensures bat->num_fours==\old(bat->num_fours)+1;
	behavior six:
		assumes rs==6;
		ensures bat->num_sixes==\old(bat->num_sixes)+1;
	disjoint behaviors four,six;
 */ 
 
 
/*	
	ignoring extras(wide and no balls)
	update after each ball
 */ 
 
void update_batsman(struct Batsman *bat,int rs) 
{
		bat->balls_faced+=1;
		bat->runs_scored+=rs;
		bat->strike_rate=(bat->runs_scored*100)/bat->balls_faced;
		bat->runrate=bat->runs_scored/(bat->balls_faced/6);
		if(!rs)
			bat->num_dots++;
		if(rs==4)
			bat->num_fours++;
		if(rs==6)
			bat->num_sixes++;
}

/*@   requires score.target>=0 && score.target <= 100000;
	requires score.total_ovr>=0 && score.total_ovr<= 100000;
	ensures \result == ((score.target +1)/((score.total_ovr - score.bowler_ovr)*6))*6;
*/
int rr_req()
{
	//Required Run Rate = (Runs required to win / Balls Remaining ) x 6
	int req=score.target +1;
	int rem_ball = score.total_ovr - score.bowler_ovr;
	rem_ball = rem_ball*6;
	rem_ball = req/rem_ball;
	req = rem_ball*6;
	return req;
}

/*@
	requires 0 <= pl->bat_avg <= 1000	&&	\valid(pl)	&&	1 < bat < 1000;
	

	ensures pl->n_mat == \old(pl->n_mat)+1;
	ensures \old(pl->bat_avg) < pl->bat_avg < bat 	|| 		bat < pl->bat_avg < \old(pl->bat_avg);
	ensures pl->bat_avg == \old(pl->bat_avg)+bat 	&& 		pl->bat_avg <= \old(pl->bat_avg);
	
 */ 

void update_player(struct Player *pl,int bat) {

	pl->n_mat+=1;
	pl->bat_avg =( (pl->bat_avg+bat) / 2 );
		
}

/*
abhishek@Abhi:~$ frama-c -wp -rte score.c
[kernel] Parsing FRAMAC_SHARE/libc/__fc_builtin_for_normalization.i (no preprocessing)
[kernel] Parsing score.c (with preprocessing)
[rte] annotating function dots
[rte] annotating function extras
[rte] annotating function four
[rte] annotating function inc_run
[rte] annotating function rr_req
[rte] annotating function runs_req
[rte] annotating function six
[rte] annotating function update
[rte] annotating function update_batsman
[rte] annotating function update_player
[rte] annotating function wicket
[wp] 95 goals scheduled
[wp] [Alt-Ergo] Goal typed_dots_assert_rte_signed_overflow : Unknown (Qed:0.90ms) (65ms)
[wp] [Alt-Ergo] Goal typed_extras_assert_rte_signed_overflow : Unknown (Qed:4ms) (53ms)
[wp] [Alt-Ergo] Goal typed_extras_assert_rte_signed_overflow_3 : Unknown (Qed:9ms) (52ms)
[wp] [Alt-Ergo] Goal typed_extras_assert_rte_signed_overflow_4 : Unknown (Qed:8ms) (66ms)
[wp] [Alt-Ergo] Goal typed_four_assert_rte_signed_overflow_3 : Unknown (Qed:3ms) (57ms)
[wp] [Alt-Ergo] Goal typed_four_assert_rte_signed_overflow : Unknown (Qed:3ms) (53ms)
[wp] [Alt-Ergo] Goal typed_inc_run_assert_rte_signed_overflow_2 : Unknown (Qed:4ms) (54ms)
[wp] [Alt-Ergo] Goal typed_rr_req_assert_rte_float_to_int_2 : Unknown (Qed:3ms) (153ms)
[wp] [Alt-Ergo] Goal typed_rr_req_assert_rte_float_to_int : Unknown (Qed:4ms) (152ms)
[wp] [Alt-Ergo] Goal typed_rr_req_assert_rte_signed_overflow_2 : Unknown (Qed:6ms) (254ms)
[wp] [Alt-Ergo] Goal typed_rr_req_assert_rte_signed_overflow_3 : Unknown (Qed:8ms) (274ms)
[wp] [Alt-Ergo] Goal typed_six_assert_rte_signed_overflow : Unknown (Qed:1ms) (51ms)
[wp] [Alt-Ergo] Goal typed_six_assert_rte_signed_overflow_3 : Unknown (Qed:3ms) (51ms)
[wp] [Alt-Ergo] Goal typed_update_batsman_assert_rte_division_by_zero_2 : Unknown (Qed:32ms) (954ms)
[wp] [Alt-Ergo] Goal typed_rr_req_post : Timeout (Qed:28ms) (10s)
[wp] [Alt-Ergo] Goal typed_rr_req_assert_rte_division_by_zero : Timeout (Qed:9ms) (10s)
[wp] [Alt-Ergo] Goal typed_rr_req_assert_rte_signed_overflow_4 : Timeout (Qed:19ms) (10s)
[wp] [Alt-Ergo] Goal typed_update_batsman_assert_rte_signed_overflow_7 : Unknown (Qed:21ms) (1s)
[wp] [Alt-Ergo] Goal typed_update_player_post_2 : Unknown (Qed:9ms) (352ms)
[wp] [Alt-Ergo] Goal typed_update_player_post_3 : Unknown (Qed:13ms) (302ms)
[wp] [Alt-Ergo] Goal typed_update_batsman_assert_rte_signed_overflow_8 : Unknown (Qed:21ms) (2.3s)
[wp] [Alt-Ergo] Goal typed_update_player_assert_rte_signed_overflow : Unknown (Qed:6ms) (212ms)
[wp] [Alt-Ergo] Goal typed_update_batsman_assert_rte_signed_overflow_9 : Unknown (Qed:22ms) (2.4s)
[wp] [Alt-Ergo] Goal typed_wicket_assert_rte_signed_overflow : Unknown (Qed:2ms) (53ms)
[wp] [Alt-Ergo] Goal typed_wicket_assert_rte_signed_overflow_2 : Unknown (Qed:3ms) (52ms)
[wp] [Alt-Ergo] Goal typed_update_batsman_assert_rte_signed_overflow_10 : Unknown (Qed:25ms) (2.4s)
[wp] [Alt-Ergo] Goal typed_wicket_assert_rte_signed_overflow_4 : Unknown (Qed:3ms) (52ms)
[wp] Proved goals:   68 / 95
     Qed:            31  (0.76ms-12ms-81ms)
     Alt-Ergo:       37  (8ms-37ms-94ms) (107) (interrupted: 3) (unknown: 24)

*/




