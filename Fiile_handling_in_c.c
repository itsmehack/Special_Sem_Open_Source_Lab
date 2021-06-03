# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;

	char dataToBeWritten[50] = "Hello World";

	filePointer = fopen("Test.c", "w") ;


	if ( filePointer == NULL )
	{
		printf( "Test.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;

		// Write the dataToBeWritten into the file
		if ( strlen ( dataToBeWritten ) > 0 )
		{

			// writing in the file using fputs()
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}

		// Closing the file using fclose()
		fclose(filePointer) ;

		printf("Data successfully written in file Test.c\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
