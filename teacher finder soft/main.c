#include <stdio.h>
#include <stdlib.h>
struct rangpur
{
    char name1[15];
    char ch[400000];
    char name2[40];
    char area[40];
    char phone[15];
    char subject[40];
    char email[40];
};

int main()
{
    int st;
    struct rangpur p;
    int press;
    mainmenu:
    printf("\n\n");
    printf("              .........................WELCOME TO TEACHER FINDER SOFTWARE!...........................\n\n");
    printf("                        ************* THIS SOFTWARE IS MADE BY MD.HADIUZZAMAN **************\n\n");
    printf("                                       1.Teacher\n\n                                       2.Student\n");

    scanf("%d",&st);
    switch(st)
    {
    case 1:
        {    system("CLS");
            printf("WELCOME TO TEACHER CATAGORY!\n\n");
            printf("SELECT YOUR CURRECT LOCATION!\n");
            int jaman;
            printf("1.rangpur\n\n2.panchogor\n\n3.dinazpur\n\n4.lalmonirhat\n\n5.nilphamary\n\n6.gybandha\n\n7.thagorgao\n\n8.kurigram\n\n0.Home\n\n");
            scanf("%d",&jaman);

            switch(jaman)
            {

            case 1: //RANGPUR AREA
                {   system("CLS");

                    printf("WELCOME TO RANGPUR AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int orpi;
                    printf("1.Gangachara\n2.Kaunia\n3.Prigacha\n4.Mithapukur\n5.pirganj\n6.Rangpur sadar\n7.Badarganj\n8.Taraganj\n0.Home\n");
                    scanf("%d",&orpi);
                    switch(orpi)
                    {
                    case 1:
                        {   system("CLS");

                    FILE *gang;
                    gang=fopen("Gangachara.txt","a");
                    if(gang==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(gang,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(gang,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(gang,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(gang,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(gang,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(gang,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 2: //KAUNIA
                        {   system("CLS");

                    FILE *kau;
                    kau=fopen("Kaunia.txt","a");
                    if(kau==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(kau,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(kau,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(kau,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(kau,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(kau,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(kau,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 3: //PIRGACHA
                        {   system("CLS");

                    FILE *pirg;
                    pirg=fopen("Pirgacha.txt","a");
                    if(pirg==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(pirg,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(pirg,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(pirg,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(pirg,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(pirg,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(pirg,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 4:
                        {   system("CLS");

                    FILE *mit;
                    mit=fopen("Mithapukur.txt","a");
                    if(mit==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(mit,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                     scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(mit,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(mit,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(mit,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(mit,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%s",&p.subject);
                        fflush(stdin);
                        fprintf(mit,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 5: //PIRGANJ
                        {   system("CLS");

                    FILE *pir;
                    pir=fopen("Pirganj.txt","a");
                    if(pir==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(pir,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(pir,"%s\n",p.name2);


                        printf("Enter your location:");
                          scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(pir,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(pir,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(pir,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                        scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(pir,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 6: // RANGPUR SADAR
                        {   system("CLS");

                    FILE *rang;
                    rang=fopen("RANGPUR_sadar.txt","a");
                    if(rang==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(rang,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(rang,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(rang,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(rang,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(rang,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(rang,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 7: //BADARGANJ
                        {   system("CLS");

                    FILE *bd;
                    bd=fopen("Badarganj.txt","a");
                    if(bd==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(bd,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(bd,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(bd,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(bd,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(bd,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(bd,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 8: //TARAGANJ
                        {   system("CLS");

                    FILE *tar;
                    tar=fopen("Taraganj.txt","a");
                    if(tar==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(tar,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(tar,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(tar,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(tar,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(tar,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(tar,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered.\n\n");
                    }
                            break;
                        }
    case 0:
        {
            system("CLS");
            goto mainmenu;

        }


                    }


                    break;

                }


            case 2: //PANCHOGAR
                {   system("CLS");
                    printf("WELCOME TO PANCHOGAR AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int habib;
                    printf("1.Atwari\n2.Boda\n3.Tetulia\n4.Panchogor sadar\n5.Debigonj\n0.Home\n");
                    scanf("%d",&habib);
                    switch(habib)
                    {
                    case 1: //ATWARI
                        {
                            system("CLS");

                    FILE *atw;
                    atw=fopen("Atwari.txt","a");
                    if(atw==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(atw,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(atw,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(atw,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(atw,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(atw,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(atw,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 2: //BODA
                        {
                            system("CLS");

                    FILE *bod;
                    bod=fopen("Boda.txt","a");
                    if(bod==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(bod,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%s",&p.name2);

                       fflush(stdin);
                       fprintf(bod,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(bod,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(bod,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(bod,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(bod,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 3: //TETULIA
                        {
                            system("CLS");

                    FILE *tat;
                    tat=fopen("Tatulia.txt","a");
                    if(tat==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(tat,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(tat,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(tat,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(tat,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(tat,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                    scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(tat,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 4: //PANCHOGAR SADAR
                        {
                            system("CLS");

                    FILE *panc;
                    panc=fopen("Panchogar_sadar.txt","a");
                    if(panc==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(panc,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(panc,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(panc,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(panc,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(panc,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                     scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(panc,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                           break;
                        }
                    case 5: // DEBIGANJ
                        {
                            system("CLS");

                    FILE *deb;
                    deb=fopen("Debiganj.txt","a");
                    if(deb==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(deb,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(deb,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(deb,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(deb,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(deb,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                     scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(deb,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered ");
                    }
                            break;
                        }
                    case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }


                    }

                    break;
                }

            case 3: //DINAZPUR
                {
                    system("CLS");
                    printf("WELCOME TO DINAZPUR AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int rakib;
                    printf("1.Bochaganj\n2.Kaharole\n3.Biral\n4.Birganj\n5.Khansama\n6.Dinazpur sadar\n7.Chirirbandar\n8.Fulbari\n9.Parbotipur\n10.Birampur\n11.Nawabganj\n12.Hakimpur\n13Ghoraghat\n0.Home\n");
                    scanf("%d",&rakib);
                    switch(rakib)
                    {   case 1: //BOCHAGANJ
                        {
                             system("CLS");

                    FILE *boc;
                    boc=fopen("Bochaganj.txt","a");
                    if(boc==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(boc,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(boc,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(boc,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(boc,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(boc,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(boc,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 2: //KAHAROLE
                        {
                             system("CLS");

                    FILE *kah;
                    kah=fopen("Kaharole.txt","a");
                    if(kah==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(kah,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(kah,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(kah,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(kah,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(kah,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(kah,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 3: //BIRAL
                        {
                             system("CLS");

                    FILE *bir;
                    bir=fopen("Biral.txt","a");
                    if(bir==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(bir,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(bir,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(bir,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(bir,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(bir,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                  scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(bir,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 4: //BIRGANJ
                        {
                             system("CLS");

                    FILE *bg;
                    bg=fopen("Birganj.txt","a");
                    if(bg==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(bg,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(bg,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(bg,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(bg,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(bg,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                     scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(bg,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 5: //KHANSAMA
                        {
                             system("CLS");

                    FILE *kha;
                    kha=fopen("Khansama.txt","a");
                    if(kha==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(kha,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(kha,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(kha,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(kha,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(kha,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(kha,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 6: //DINAZPUR SASAR
                        {
                             system("CLS");

                    FILE *din;
                    din=fopen("Dinazpur_sadar.txt","a");
                    if(din==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(din,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(din,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(din,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(din,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(din,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                   scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(din,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                            break;
                        }
                        case 7: //CHIRIRBANDAR
                        {
                             system("CLS");

                    FILE *chi;
                    chi=fopen("Chirirbandar.txt","a");
                    if(chi==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(chi,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(chi,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(chi,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(chi,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(chi,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                 scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(chi,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 8: //FULBARI
                        {
                             system("CLS");

                    FILE *ful;
                    ful=fopen("Fulbari.txt","a");
                    if(ful==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(ful,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(ful,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(ful,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(ful,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(ful,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(ful,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 9: //PARBOTIPUR
                        {    system("CLS");

                    FILE *par;
                    par=fopen("Parbotipur.txt","a");
                    if(par==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(par,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(par,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(par,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(par,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(par,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(par,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 10: //BIRAMPUR
                        {
                             system("CLS");

                    FILE *bm;
                    bm=fopen("Birampur.txt","a");
                    if(bm==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(bm,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                     scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(bm,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(bm,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(bm,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(bm,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(bm,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 11: //NOWABGONJ
                        {
                             system("CLS");

                    FILE *nob;
                    nob=fopen("Nowabgonj.txt","a");
                    if(nob==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(nob,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(nob,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(nob,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(nob,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(nob,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                    scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(nob,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }

                            break;
                        }
                        case 12: //HAKIMPUR
                        {
                             system("CLS");

                    FILE *hak;
                    hak=fopen("Hakimpur.txt","a");
                    if(hak==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(hak,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(hak,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(hak,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(hak,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(hak,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(hak,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                        case 13: //GHORAGHAT
                        {
                             system("CLS");

                    FILE *gho;
                    gho=fopen("Ghoraghat.txt","a");
                    if(gho==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(gho,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(gho,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(gho,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(gho,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(gho,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(gho,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                          case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }



                    }
                    break;
                }
            case 4: //LALMONIRHAT
                {    system("CLS");
                    printf("WELCOME TO LALMONIRHAT AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int lal;
                    printf("1.Patgram\n2.Hatibandha\n3.Kaliganj\n4.Aditmari\n5.Lalmonirhat sadar\n0.Home\n");
                    scanf("%d",&lal);
                    switch(lal)
                    {
                    case 1: //PATGRAM
                        {
                             system("CLS");

                    FILE *pat;
                    pat=fopen("Patgram.txt","a");
                    if(pat==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(pat,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(pat,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(pat,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(pat,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(pat,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(pat,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }

                            break;
                        }
                    case 2: //HATIBANDHA
                        {
                             system("CLS");

                    FILE *hat;
                    hat=fopen("Hatibandha.txt","a");
                    if(hat==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(hat,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(hat,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(hat,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(hat,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(hat,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(hat,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 3: //KALIGANJ
                        {
                             system("CLS");

                    FILE *kal;
                    kal=fopen("Kakiganj.txt","a");
                    if(kal==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(kal,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(kal,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(kal,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(kal,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(kal,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(kal,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 4: //ADITMARI
                        {
                             system("CLS");

                    FILE *adi;
                    adi=fopen("Aditmari.txt","a");
                    if(adi==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(adi,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(adi,"%s\n",p.name2);


                        printf("Enter your location:");
                     scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(adi,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(adi,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(adi,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(adi,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                            break;
                        }
                    case 5: //LALMONIRHAT SADAR
                        {
                             system("CLS");

                    FILE *lal;
                    lal=fopen("Lalmonirhat_sadar.txt","a");
                    if(lal==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(lal,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(lal,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(lal,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(lal,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(lal,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(lal,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }

                    }

                    break;
                }
            case 5: //NILPHAMARY
                {
                     system("CLS");
                    printf("WELCOME TO NILPHAMARY AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int nl;
                    printf("1.Dimla\n2.Domar\n3.Jaldhaka\n4.Kishoreganj\n5.saidpur\n0.Home\n");
                    scanf("%d",&nl);
                    switch(nl)
                    {
                    case 1: //DIMLA
                        {
                             system("CLS");

                    FILE *dim;
                    dim=fopen("Dimla.txt","a");
                    if(dim==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(dim,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(dim,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(dim,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(dim,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(dim,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(dim,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 2: //DOMAR
                        {
                             system("CLS");

                    FILE *dom;
                    dom=fopen("Domar.txt","a");
                    if(dom==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(dom,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(dom,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(dom,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(dom,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(dom,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(dom,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 3: //JALDHAKA
                        {
                             system("CLS");

                    FILE *jal;
                    jal=fopen("Jaldhaka.txt","a");
                    if(jal==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(jal,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(jal,"%s\n",p.name2);


                        printf("Enter your location:");
                     scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(jal,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(jal,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(jal,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(jal,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                            break;
                        }
                    case 4: //KISHOREGONJ
                        {
                             system("CLS");

                    FILE *kis;
                    kis=fopen("Kishoregonj.txt","a");
                    if(kis==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(kis,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(kis,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(kis,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(kis,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(kis,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(kis,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                            break;
                        }
                    case 5: //SAIDPUR
                        {
                             system("CLS");

                    FILE *sd;
                    sd=fopen("Saidpur.txt","a");
                    if(sd==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(sd,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(sd,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(sd,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(sd,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(sd,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(sd,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                            break;
                        }
                    case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }


                    }
                    break;
                }
            case 6: //GAYBANDHA
                {
                     system("CLS");
                    printf("WELCOME TO GAYBANDHA AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int gy;
                    printf("1.Sundarganj\n2.Sadullapur\n3.Chibandha\n4.Palashbari\n5.Gobindoganj\n6.Fulchari\n7.Saghatta\n0.Home\n");
                    scanf("%d",&gy);
                    switch(gy)
                    {
                   case 1: //SUNDARGANJ
                    {
                         system("CLS");

                    FILE *sun;
                    sun=fopen("Sundarganj.txt","a");
                    if(sun==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(sun,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(sun,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(sun,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(sun,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(sun,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(sun,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                   case 2: //SADULLAPUR
                    {
                         system("CLS");

                    FILE *sr;
                    sr=fopen("Sadullapur.txt","a");
                    if(sr==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(sr,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(sr,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(sr,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(sr,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(sr,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(sr,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                   case 3: //GHIBANDHA
                    {
                         system("CLS");

                    FILE *gy;
                    gy=fopen("Ghibandha.txt","a");
                    if(gy==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(gy,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(gy,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(gy,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(gy,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(gy,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(gy,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                   case 4: //PALASHBARI
                    {
                         system("CLS");

                    FILE *pls;
                    pls=fopen("Palashbari.txt","a");
                    if(pls==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(pls,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(pls,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(pls,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(pls,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(pls,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(pls,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                   case 5: //GOBINDAGONJ
                    {
                         system("CLS");

                    FILE *gob;
                    gob=fopen("Gobindagonj.txt","a");
                    if(gob==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(gob,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(gob,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(gob,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(gob,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(gob,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(gob,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                   case 6: //FULCHARI
                    {
                         system("CLS");

                    FILE *flc;
                    flc=fopen("Fulchari.txt","a");
                    if(flc==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(flc,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(flc,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(flc,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(flc,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(flc,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(flc,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                   case 7: //SAGHATTA
                    {
                         system("CLS");

                    FILE *sag;
                    sag=fopen("Saghatta.txt","a");
                    if(sag==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(sag,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(sag,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(sag,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(sag,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(sag,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(sag,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                    case 0:
                    {
                        system("CLS");
                        goto mainmenu;

                    }

                    }
                    break;
                }
            case 7: //THAKURGAON
                {
                     system("CLS");
                    printf("WELCOME TO THAKURGAON AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int th;
                    printf("1.Baliadangi\n2.Thakurgaon sadar\n3.Ranisankail\n4.Pirganj\n5.Haripur\n0.Home\n");
                    scanf("%d",&th);
                    switch(th)
                    {
                  case 1: //BALIADANGI
                    {
                         system("CLS");

                    FILE *ball;
                    ball=fopen("Balaiadangi.txt","a");
                    if(ball==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(ball,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(ball,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(ball,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(ball,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(ball,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(ball,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                  case 2: //THAKURGAON SADAR
                    {
                         system("CLS");

                    FILE *tha;
                    tha=fopen("Thakurgaon.txt","a");
                    if(tha==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(tha,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(tha,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(tha,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(tha,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(tha,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(tha,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                  case 3: //RANISANKAIL
                    {
                         system("CLS");

                    FILE *ran;
                    ran=fopen("Ranisankall.txt","a");
                    if(ran==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(ran,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(ran,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(ran,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(ran,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(ran,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(ran,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                  case 4: //PIRGANJ
                    {
                         system("CLS");

                    FILE *pir;
                    pir=fopen("Pirganj.txt","a");
                    if(pir==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(pir,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(pir,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(pir,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(pir,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(pir,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(pir,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                  case 5: // HARIPUR
                    {
                         system("CLS");

                    FILE *har;
                    har=fopen("Haripur.txt","a");
                    if(har==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(har,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(har,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(har,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(har,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(har,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(har,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                case 0:
                    {
                        system("CLS");
                        goto mainmenu;

                    }

                    }
                    break;
                }
            case 8://KURIGRAM
                {
                     system("CLS");
                    printf("WELCOME TO KURIGRAM AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int ku;
                    printf("1.Bhurungamari\n2.Nageshwari\n3.Phulbari\n4.Kurigram sadar\n5.Rajarhat\n6.Ulipur\n7.Chilmari\n8.Raumari\n9.Rajibpur\n0.Home\n");
                    scanf("%d",&ku);
                    switch(ku)
                    {
                  case 1: //BHURUNGAMARI
                    {
                         system("CLS");

                    FILE *bhu;
                    bhu=fopen("Bhurungamari.txt","a");
                    if(bhu==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(bhu,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(bhu,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(bhu,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(bhu,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(bhu,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(bhu,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                     case 2: //NAGESHWARI
                    {
                         system("CLS");

                    FILE *nag;
                    nag=fopen("Nageshwari.txt","a");
                    if(nag==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(nag,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(nag,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(nag,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(nag,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(nag,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(nag,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                     case 3: //PHULBARI
                    {
                         system("CLS");

                    FILE *phl;
                    phl=fopen("Phulbari.txt","a");
                    if(phl==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(phl,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                     scanf("%[^\n]",p.name2);

                       fflush(stdin);
                       fprintf(phl,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(phl,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(phl,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(phl,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(phl,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                     case 4: //KURIGRAM SASAR
                    {
                         system("CLS");

                    FILE *kur;
                    kur=fopen("Kurigram_sadar.txt","a");
                    if(kur==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(kur,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(kur,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);

                        fflush(stdin);
                         fprintf(kur,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(kur,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(kur,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(kur,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                     case 5: //RAJARHAT
                    {
                         system("CLS");

                    FILE *rjt;
                    rjt=fopen("Rajarhat.txt","a");
                    if(rjt==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(rjt,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(rjt,"%s\n",p.name2);


                        printf("Enter your location:");
                      scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(rjt,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(rjt,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(rjt,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(rjt,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                     case 6: //ULIPUR
                    {
                         system("CLS");

                    FILE *uli;
                    uli=fopen("Ulipur.txt","a");
                    if(uli==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(uli,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                       scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(uli,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(uli,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(uli,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(uli,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);;
                        fflush(stdin);
                        fprintf(uli,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                     case 7: // CHILMARI
                    {
                         system("CLS");

                    FILE *chil;
                    chil=fopen("chilmari.txt","a");
                    if(chil==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(chil,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(chil,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(chil,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(chil,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(chil,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                       scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(chil,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                     case 8: //RAOMARI
                    {
                         system("CLS");

                    FILE *rao;
                    rao=fopen("Raomari.txt","a");
                    if(rao==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(rao,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                      scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(rao,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(rao,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(rao,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(rao,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(rao,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered\n\n ");
                    }
                        break;
                    }
                     case 9: //RAJIBPUR
                    {
                         system("CLS");

                    FILE *raji;
                    raji=fopen("Rajibpur.txt","a");
                    if(raji==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        printf("Enter your first name: ");
                       scanf("%s",&p.name1);

                       fflush(stdin);
                       fprintf(raji,"NAME: %s ",p.name1);

                        printf("Enter your last name: ");
                     scanf("%[^\n]",p.name2);
                       fflush(stdin);
                       fprintf(raji,"%s\n",p.name2);


                        printf("Enter your location:");
                       scanf("%[^\n]",p.area);
                        fflush(stdin);
                         fprintf(raji,"LOCATION: %s\n",p.area);

                        printf("Enter your phone number: ");
                       scanf("%s",&p.phone);
                        fflush(stdin);
                        fprintf(raji,"MOBILE NO:%s\n",p.phone);
                        printf("Enter your email address :");
                        scanf("%s",&p.email);
                        fflush(stdin);
                        fprintf(raji,"EMAIL ADDRESS: %s\n",p.email);
                        printf("Enter your interested subject which you can teach: ");
                      scanf("%[^\n]",p.subject);
                        fflush(stdin);
                        fprintf(raji,"INTERESTED SUBJECT: %s\n::::::::::::::::::::::::::::::::::::::::::::::\n\n",p.subject);
                        printf("\n");

                        printf("you are successfully registered \n\n");
                    }
                        break;
                    }
                    case 0:
                    {
                        system("CLS");
                        goto mainmenu;

                    }

                    }
                    break;
                }
    case 0:
        {
            system("CLS");
            goto mainmenu;

        }

}

break;

        }



    case 2:
        {


                 system("CLS");
            printf("WELCOME TO STUDENT CATAGORY!\n\n");
            printf("SELECT YOUR CURRECT LOCATION!\n");
            int jaman;
            printf("1.rangpur\n\n2.panchogor\n\n3.dinazpur\n\n4.lalmonirhat\n\n5.nilphamary\n\n6.gybandha\n\n7.thagorgao\n\n8.kurigram\n\n0.Home\n\n");
            scanf("%d",&jaman);

            switch(jaman)
            {

            case 1: //RANGPUR AREA
                {   system("CLS");

                    printf("WELCOME TO RANGPUR AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int orpi;
                    printf("1.Gangachara\n2.Kaunia\n3.Prigacha\n4.Mithapukur\n5.pirganj\n6.Rangpur sadar\n7.Badarganj\n8.Taraganj\n0.Home\n");
                    scanf("%d",&orpi);
                    switch(orpi)
                    {
                    case 1:
                        {   system("CLS");

                    FILE *gang;
                    gang=fopen("Gangachara.txt","r");
                    if(gang==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                          {

                        while(!feof(gang))
                              {

                                        fscanf(gang,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");

                            break;
                        }
                    case 2: //KAUNIA
                        {   system("CLS");

                    FILE *kau;
                    kau=fopen("Kaunia.txt","r");
                    if(kau==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(kau))
                              {

                                        fscanf(kau,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 3: //PIRGACHA
                        {   system("CLS");

                    FILE *pirg;
                    pirg=fopen("Pirgacha.txt","r");
                    if(pirg==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {while(!feof(pirg))
                              {

                                        fscanf(pirg,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 4:
                        {   system("CLS");

                    FILE *mit;
                    mit=fopen("Mithapukur.txt","r");
                    if(mit==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(mit))
                              {

                                        fscanf(mit,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 5: //PIRGANJ
                        {   system("CLS");

                    FILE *pir;
                    pir=fopen("Pirganj.txt","r");
                    if(pir==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(pir))
                              {

                                        fscanf(pir,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 6: // RANGPUR SADAR
                        {   system("CLS");

                    FILE *rang;
                    rang=fopen("RANGPUR_sadar.txt","r");
                    if(rang==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(rang))
                              {

                                        fscanf(rang,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 7: //BADARGANJ
                        {   system("CLS");

                    FILE *bd;
                    bd=fopen("Badarganj.txt","r");
                    if(bd==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {while(!feof(bd))
                              {

                                        fscanf(bd,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 8: //TARAGANJ
                        {   system("CLS");

                    FILE *tar;
                    tar=fopen("Taraganj.txt","r");
                    if(tar==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(tar))
                              {

                                        fscanf(tar,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
    case 0:
        {
            system("CLS");
            goto mainmenu;

        }


                    }


                    break;

                }


            case 2: //PANCHOGAR
                {   system("CLS");
                    printf("WELCOME TO PANCHOGAR AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int habib;
                    printf("1.Atwari\n2.Boda\n3.Tetulia\n4.Panchogor sadar\n5.Debigonj\n0.Home\n");
                    scanf("%d",&habib);
                    switch(habib)
                    {
                    case 1: //ATWARI
                        {
                            system("CLS");

                    FILE *atw;
                    atw=fopen("Atwari.txt","r");
                    if(atw==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {while(!feof(atw))
                              {

                                        fscanf(atw,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 2: //BODA
                        {
                            system("CLS");

                    FILE *bod;
                    bod=fopen("Boda.txt","r");
                    if(bod==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {while(!feof(bod))
                              {

                                        fscanf(bod,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 3: //TETULIA
                        {
                            system("CLS");

                    FILE *tat;
                    tat=fopen("Tatulia.txt","r");
                    if(tat==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(tat))
                              {

                                        fscanf(tat,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 4: //PANCHOGAR SADAR
                        {
                            system("CLS");

                    FILE *panc;
                    panc=fopen("Panchogar_sadar.txt","r");
                    if(panc==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(panc))
                              {

                                        fscanf(panc,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                           break;
                        }
                    case 5: // DEBIGANJ
                        {
                            system("CLS");

                    FILE *deb;
                    deb=fopen("Debiganj.txt","r");
                    if(deb==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(deb))
                              {

                                        fscanf(deb,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }


                    }

                    break;
                }

            case 3: //DINAZPUR
                {
                    system("CLS");
                    printf("WELCOME TO DINAZPUR AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int rakib;
                    printf("1.Bochaganj\n2.Kaharole\n3.Biral\n4.Birganj\n5.Khansama\n6.Dinazpur sadar\n7.Chirirbandar\n8.Fulbari\n9.Parbotipur\n10.Birampur\n11.Nawabganj\n12.Hakimpur\n13Ghoraghat\n0.Home\n");
                    scanf("%d",&rakib);
                    switch(rakib)
                    {   case 1: //BOCHAGANJ
                        {
                             system("CLS");

                    FILE *boc;
                    boc=fopen("Bochaganj.txt","r");
                    if(boc==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(boc))
                              {

                                        fscanf(boc,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 2: //KAHAROLE
                        {
                             system("CLS");

                    FILE *kah;
                    kah=fopen("Kaharole.txt","r");
                    if(kah==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(kah))
                              {

                                        fscanf(kah,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 3: //BIRAL
                        {
                             system("CLS");

                    FILE *bir;
                    bir=fopen("Biral.txt","r");
                    if(bir==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(bir))
                              {

                                        fscanf(bir,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 4: //BIRGANJ
                        {
                             system("CLS");

                    FILE *bg;
                    bg=fopen("Birganj.txt","r");
                    if(bg==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(bg))
                              {

                                        fscanf(bg,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 5: //KHANSAMA
                        {
                             system("CLS");

                    FILE *kha;
                    kha=fopen("Khansama.txt","r");
                    if(kha==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(kha))
                              {

                                        fscanf(kha,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 6: //DINAZPUR SAdAR
                        {
                             system("CLS");

                    FILE *din;
                    din=fopen("Dinazpur_sadar.txt","r");
                    if(din==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(din))
                              {

                                        fscanf(din,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 7: //CHIRIRBANDAR
                        {
                             system("CLS");

                    FILE *chi;
                    chi=fopen("Chirirbandar.txt","r");
                    if(chi==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(chi))
                              {

                                        fscanf(chi,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 8: //FULBARI
                        {
                             system("CLS");

                    FILE *ful;
                    ful=fopen("Fulbari.txt","r");
                    if(ful==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(ful))
                              {

                                        fscanf(ful,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 9: //PARBOTIPUR
                        {    system("CLS");

                    FILE *par;
                    par=fopen("Parbotipur.txt","r");
                    if(par==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(par))
                              {

                                        fscanf(par,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");      break;
                        }
                        case 10: //BIRAMPUR
                        {
                             system("CLS");

                    FILE *bm;
                    bm=fopen("Birampur.txt","r");
                    if(bm==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(bm))
                              {

                                        fscanf(bm,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 11: //NOWABGONJ
                        {
                             system("CLS");

                    FILE *nob;
                    nob=fopen("Nowabgonj.txt","r");
                    if(nob==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(nob))
                              {

                                        fscanf(nob,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");

                            break;
                        }
                        case 12: //HAKIMPUR
                        {
                             system("CLS");

                    FILE *hak;
                    hak=fopen("Hakimpur.txt","r");
                    if(hak==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(hak))
                              {

                                        fscanf(hak,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                        case 13: //GHORAGHAT
                        {
                             system("CLS");

                    FILE *gho;
                    gho=fopen("Ghoraghat.txt","r");
                    if(gho==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(gho))
                              {

                                        fscanf(gho,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                          case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }



                    }
                    break;
                }
            case 4: //LALMONIRHAT
                {    system("CLS");
                    printf("WELCOME TO LALMONIRHAT AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int lal;
                    printf("1.Patgram\n2.Hatibandha\n3.Kaliganj\n4.Aditmari\n5.Lalmonirhat sadar\n0.Home\n");
                    scanf("%d",&lal);
                    switch(lal)
                    {
                    case 1: //PATGRAM
                        {
                             system("CLS");

                    FILE *pat;
                    pat=fopen("Patgram.txt","r");
                    if(pat==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(pat))
                              {

                                        fscanf(pat,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 2: //HATIBANDHA
                        {
                             system("CLS");

                    FILE *hat;
                    hat=fopen("Hatibandha.txt","r");
                    if(hat==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(hat))
                              {

                                        fscanf(hat,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");       break;
                        }
                    case 3: //KALIGANJ
                        {
                             system("CLS");

                    FILE *kal;
                    kal=fopen("Kakiganj.txt","r");
                    if(kal==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(kal))
                              {

                                        fscanf(kal,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 4: //ADITMARI
                        {
                             system("CLS");

                    FILE *adi;
                    adi=fopen("Aditmari.txt","r");
                    if(adi==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(adi))
                              {

                                        fscanf(adi,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 5: //LALMONIRHAT SADAR
                        {
                             system("CLS");

                    FILE *lal;
                    lal=fopen("Lalmonirhat_sadar.txt","r");
                    if(lal==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(lal))
                              {

                                        fscanf(lal,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }

                    }

                    break;
                }
            case 5: //NILPHAMARY
                {
                     system("CLS");
                    printf("WELCOME TO NILPHAMARY AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int nl;
                    printf("1.Dimla\n2.Domar\n3.Jaldhaka\n4.Kishoreganj\n5.saidpur\n0.Home\n");
                    scanf("%d",&nl);
                    switch(nl)
                    {
                    case 1: //DIMLA
                        {
                             system("CLS");

                    FILE *dim;
                    dim=fopen("Dimla.txt","r");
                    if(dim==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(dim))
                              {

                                        fscanf(dim,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 2: //DOMAR
                        {
                             system("CLS");

                    FILE *dom;
                    dom=fopen("Domar.txt","r");
                    if(dom==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(dom))
                              {

                                        fscanf(dom,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 3: //JALDHAKA
                        {
                             system("CLS");

                    FILE *jal;
                    jal=fopen("Jaldhaka.txt","r");
                    if(jal==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(jal))
                              {

                                        fscanf(jal,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 4: //KISHOREGONJ
                        {
                             system("CLS");

                    FILE *kis;
                    kis=fopen("Kishoregonj.txt","r");
                    if(kis==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(kis))
                              {

                                        fscanf(kis,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 5: //SAIDPUR
                        {
                             system("CLS");

                    FILE *sd;
                    sd=fopen("Saidpur.txt","r");
                    if(sd==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(sd))
                              {

                                        fscanf(sd,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                            break;
                        }
                    case 0:
                        {
                            system("CLS");
                            goto mainmenu;

                        }


                    }
                    break;
                }
            case 6: //GAYBANDHA
                {
                     system("CLS");
                    printf("WELCOME TO GAYBANDHA AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int gy;
                    printf("1.Sundarganj\n2.Sadullapur\n3.Chibandha\n4.Palashbari\n5.Gobindoganj\n6.Fulchari\n7.Saghatta\n0.Home\n");
                    scanf("%d",&gy);
                    switch(gy)
                    {
                   case 1: //SUNDARGANJ
                    {
                         system("CLS");

                    FILE *sun;
                    sun=fopen("Sundarganj.txt","r");
                    if(sun==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(sun))
                              {

                                        fscanf(sun,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                   case 2: //SADULLAPUR
                    {
                         system("CLS");

                    FILE *sr;
                    sr=fopen("Sadullapur.txt","r");
                    if(sr==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(sr))
                              {

                                        fscanf(sr,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                   case 3: //GHIBANDHA
                    {
                         system("CLS");

                    FILE *gy;
                    gy=fopen("Ghibandha.txt","r");
                    if(gy==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(gy))
                              {

                                        fscanf(gy,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                   case 4: //PALASHBARI
                    {
                         system("CLS");

                    FILE *pls;
                    pls=fopen("Palashbari.txt","r");
                    if(pls==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(pls))
                              {

                                        fscanf(pls,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                   case 5: //GOBINDAGONJ
                    {
                         system("CLS");

                    FILE *gob;
                    gob=fopen("Gobindagonj.txt","r");
                    if(gob==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(gob))
                              {

                                        fscanf(gob,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                   case 6: //FULCHARI
                    {
                         system("CLS");

                    FILE *flc;
                    flc=fopen("Fulchari.txt","r");
                    if(flc==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(flc))
                              {

                                        fscanf(flc,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }



                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                   case 7: //SAGHATTA
                    {
                         system("CLS");

                    FILE *sag;
                    sag=fopen("Saghatta.txt","r");
                    if(sag==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                      while(!feof(sag))
                              {

                                        fscanf(sag,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");

                        break;
                    }
                    case 0:
                    {
                        system("CLS");
                        goto mainmenu;

                    }

                    }
                    break;
                }
            case 7: //THAKURGAON
                {
                     system("CLS");
                    printf("WELCOME TO THAKURGAON AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int th;
                    printf("1.Baliadangi\n2.Thakurgaon sadar\n3.Ranisankail\n4.Pirganj\n5.Haripur\n0.Home\n");
                    scanf("%d",&th);
                    switch(th)
                    {
                  case 1: //BALIADANGI
                    {
                         system("CLS");

                    FILE *ball;
                    ball=fopen("Balaiadangi.txt","r");
                    if(ball==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(ball))
                              {

                                        fscanf(ball,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                  case 2: //THAKURGAON SADAR
                    {
                         system("CLS");

                    FILE *tha;
                    tha=fopen("Thakurgaon.txt","r");
                    if(tha==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(tha))
                              {

                                        fscanf(tha,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                  case 3: //RANISANKAIL
                    {
                         system("CLS");

                    FILE *ran;
                    ran=fopen("Ranisankall.txt","r");
                    if(ran==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(ran))
                              {

                                        fscanf(ran,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                  case 4: //PIRGANJ
                    {
                         system("CLS");

                    FILE *pir;
                    pir=fopen("Pirganj.txt","r");
                    if(pir==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(pir))
                              {

                                        fscanf(pir,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                  case 5: // HARIPUR
                    {
                         system("CLS");

                    FILE *har;
                    har=fopen("Haripur.txt","r");
                    if(har==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(har))
                              {

                                        fscanf(har,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                case 0:
                    {
                        system("CLS");
                        goto mainmenu;

                    }

                    }
                    break;
                }
            case 8://KURIGRAM
                {
                     system("CLS");
                    printf("WELCOME TO KURIGRAM AREA!\n");
                    printf("SELECT YOUR CURRECT LOCATION!\n");
                    int ku;
                    printf("1.Bhurungamari\n2.Nageshwari\n3.Phulbari\n4.Kurigram sadar\n5.Rajarhat\n6.Ulipur\n7.Chilmari\n8.Raumari\n9.Rajibpur\n0.Home\n");
                    scanf("%d",&ku);
                    switch(ku)
                    {
                  case 1: //BHURUNGAMARI
                    {
                         system("CLS");

                    FILE *bhu;
                    bhu=fopen("Bhurungamari.txt","r");
                    if(bhu==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(bhu))
                              {

                                        fscanf(bhu,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 2: //NAGESHWARI
                    {
                         system("CLS");

                    FILE *nag;
                    nag=fopen("Nageshwari.txt","r");
                    if(nag==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(nag))
                              {

                                        fscanf(nag,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 3: //PHULBARI
                    {
                         system("CLS");

                    FILE *phl;
                    phl=fopen("Phulbari.txt","r");
                    if(phl==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(phl))
                              {

                                        fscanf(phl,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 4: //KURIGRAM SASAR
                    {
                         system("CLS");

                    FILE *kur;
                    kur=fopen("Kurigram_sadar.txt","r");
                    if(kur==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(kur))
                              {

                                        fscanf(kur,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 5: //RAJARHAT
                    {
                         system("CLS");

                    FILE *rjt;
                    rjt=fopen("Rajarhat.txt","r");
                    if(rjt==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(rjt))
                              {

                                        fscanf(rjt,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 6: //ULIPUR
                    {
                         system("CLS");

                    FILE *uli;
                    uli=fopen("Ulipur.txt","r");
                    if(uli==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(uli))
                              {

                                        fscanf(uli,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 7: // CHILMARI
                    {
                         system("CLS");

                    FILE *chil;
                    chil=fopen("chilmari.txt","r");
                    if(chil==NULL)
                    {
                        printf("the file is not open\n");
                    }

                    else
                    {
                        while(!feof(chil))
                              {

                                        fscanf(chil,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 8: //RAOMARI
                    {
                         system("CLS");

                    FILE *rao;
                    rao=fopen("Raomari.txt","r");
                    if(rao==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                       while(!feof(rao))
                              {

                                        fscanf(rao,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                     case 9: //RAJIBPUR
                    {
                         system("CLS");

                    FILE *raji;
                    raji=fopen("Rajibpur.txt","r");
                    if(raji==NULL)
                    {
                        printf("the file is not open\n");
                    }
                    else
                    {
                        while(!feof(raji))
                              {

                                        fscanf(raji,"%[^\n]\n",&p.ch);

                                        printf("%s\n",p.ch);
                               }

                    }
                printf("THANK YOU FOR USING THIS SOFTWARE\nMADE BY MD.HADIUZZAMAN\n");
                        break;
                    }
                    case 0:
                    {
                        system("CLS");
                        goto mainmenu;

                    }

                    }
                    break;
                }
    case 0:
        {
            system("CLS");
            goto mainmenu;

        }

}
break;

    }

    default:
        printf("NOT A VALID NUMBER !\nPLEASE TRY AGAIN.\n");
    }
    return 0;
}
