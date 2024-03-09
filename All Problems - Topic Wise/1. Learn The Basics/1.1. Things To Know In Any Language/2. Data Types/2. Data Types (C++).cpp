int dataTypes(string type) 
{
	if(type == "Integer")
		return 4;
	if(type == "Long")
		return 8;
	if(type == "Float")
		return 4;
	if(type == "Double")
		return 8;
	if(type == "Character")
		return 1;
	return -1;
}
