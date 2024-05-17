int phoneSearch(char* ptSearch){
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("data.txt","r");

    if(fptr== NULL){
        return -1;
    }

    printf("\n\nIsim\t\t\tSoyisim\t\t\tNumara\n");
    printf("----\t\t\t-------\t\t\t-------\n\n");

    int i=0;

    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        if(!strcmp(ptSearch,currentRecord.name)){
            printf("%s\t\t\t",currentRecord.name);
            printf("%s\t\t\t",currentRecord.lastname);
            printf("%s\n",currentRecord.phone);
            i++;
        }
    }
    fclose(fptr);
    return i;

}
