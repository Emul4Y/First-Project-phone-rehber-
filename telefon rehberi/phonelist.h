int phoneList(){
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("data.txt","r");

    if(fptr== NULL){
        return -1;
    }

    printf("\n\nIsim\t\t\t\tSoyisim\t\t\t\tNumara\n");
    printf("----\t\t\t\t-------\t\t\t\t-------\n\n");

    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        printf("%-20s\t\t",currentRecord.name);
        printf("%-20s\t\t",currentRecord.lastname);
        printf("%s\n",currentRecord.phone);
    }

    fclose(fptr);
    return 0;

}
