#include <stdio.h>
#include <string.h>

main ()
{
struct data
    {
    int in,stok,harga;
    char nama[10],warna[10];
    };
int n=0,x=0,y=0,pilih,pil,pil2,i,jb,carbar,total;
data stok[10],laporan[10];
  stok[y].in=y+1;
            printf ("Masukan barang\n");
            printf ("nama barang:");
            scanf("%s",&stok[y].nama);
            printf("Warna Barang :") ;
            scanf("%s",&stok[y].warna);
            printf ("jumlah barang (Pcs):");
            scanf ("%d",&stok[y].stok);
            printf ("harga :");
            scanf ("%d",&stok[y].harga);
            y++;
do{

printf ("menu utama\n");
printf ("[1] lihat stok barang\n");
printf ("[2] Pembayaran\n");
printf ("[3] laporan\n");
printf ("[4] keluar\n");

printf ("pilih menu\n");
scanf ("%d",&pilih);

switch (pilih)
    {
    case 1:





            for (i=0;i<y;i++)
                {
                printf ("%d\t%s\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].warna,stok[i].stok,stok[i].harga);
                }

        printf ("[1] barang baru\n");
        printf ("[2] Tambah stok\n");

        printf ("pilih:");
        scanf ("%d",&pil);

        if (pil==1){
              stok[y].in=y+1;
            printf ("Masukan barang\n");
            printf ("nama barang:");
            scanf("%s",&stok[y].nama);
            printf("Warna Barang :") ;
            scanf("%s",&stok[y].warna);
            printf ("jumlah barang (Pcs):");
            scanf ("%d",&stok[y].stok);
            printf ("harga :");
            scanf ("%d",&stok[y].harga);
            y++;}
        else if (pil==2)
        {
            for (i=0;i<y;i++)
                {
                printf ("%d\t%s\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].warna,stok[i].stok,stok[i].harga);
                }

        printf ("pilih barang");
        scanf ("%d",&pil2);

            for (i=0;i<y;i++)
                {
                    if (pil2==stok[i].in)
                    {
                    printf ("masukan jumlah barang");
                    scanf ("%d",&jb);
                    stok[i].stok=stok[i].stok+jb;
                    }
                }
        }break;




    case 2:
         for (i=0;i<y;i++){
         printf ("%d\t%s\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].warna,stok[i].stok,stok[i].harga);
         }
         printf("Pilih barang :"); scanf("%d",&carbar);
         for (i=0;i<y;i++){
            if (stok[i].in==carbar)
            {
                printf("Nama barang : %s \n",stok[i].nama);
                printf("Warna barang : %s \n",stok[i].warna);
                printf("Harga barang : Rp %d/pcs \n",stok[i].harga);
                printf("Jumlah beli : "); scanf("%d",&jb);
                stok[i].stok=stok[i].stok-jb;
                total=jb*stok[i].harga;
                printf("Total Harga : Rp %d \n",total);

                strcpy(laporan[n].nama,stok[i].nama);
                strcpy(laporan[n].warna,stok[i].warna);
                laporan[n].stok=jb;
                laporan[n].harga=total;
                laporan[n].in=n+1;
                n++;
            }
         }break;
    case 3:
        for (i=0;i<n;i++) {
            printf("%d\t %s\t %s\t %d\t %d\t\n",laporan[i].in,laporan[i].nama,laporan[i].warna,laporan[i].stok,laporan[i].harga);
        }  break;
    }

}while(pilih!=4)
}


