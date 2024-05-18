double areaSwitchCase(int ch, vector<double> a) 
{
	switch(ch)
	{
		case 1 : return M_PI * a[0] * a[0];
		case 2 : return a[0] * a[1];
	}
	return 0;
}
