void dmain(void* mbd, unsigned int magic)
{
	if(magic!=0x1BADB002)
	{
		print("Error: Invalid Magic Number!",0x04);
	}
	else
	{
		print("Hello World!",0x07);
	}
}

int print(char* message, int color)
{

	char* mem = (char*)(0xb8000);
	while(*message !=0)
	{
		*mem = *message;
		mem++;
		message++;
		*mem = (char*)color;
		mem++;
	}

}