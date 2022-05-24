struct numbers
{
	int a;
	int b;
	int c;
};

program CALC_PROGRAM
{
	version CALC_VERS
	{
		int calc(numbers) = 1;
	} = 1;	

} = 0x23451111;
