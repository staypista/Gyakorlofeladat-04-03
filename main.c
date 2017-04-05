#include <stdio.h>
#include <stdlib.h>
/**Programozás korrepetálás negyedik heti házifeladat.
 * Téma: Tömbök és pointerek
 * Kérem a teljesítési időket rögzítse!
 * A feladatokat a kiírás alá végezze el.
 * Célidő: 21 perc + 5 perc(bónusz)
 * Superuser idő: 10 perc
 */
int main()
{
    printf("*** 1. feladat ***\n");
    /** 1. Feladat:
     *  Hozzon létre egy ciklust mely 100 tól számol vissza egészen 0ig! (0 is beletartozik)
     *  Minden egyes értéket a számmal megfelelő tömb indexre írja be. (Tömb 67. eleme legyen 67)
     *  Célidő: 3 perc
     *  Teljesítési idő:
     */
     char array[101]={0};


    printf("\n\n*** 2. feladat ***\n");
    /** 2. Feladat:
     *  Hozzon létre egy ciklust mely 100 tól számol egészen 500-ig! (500 nem tartozik bele)
     *  Írja be azokat az értékeket a tömbe melyek párosak és oszthatóak 3-al maradék nélkül!
     *  Célidő: 3 perc
     *  Teljesítési idő:
     */
     int array2[200]={0};


    printf("\n\n*** 3. feladat ***\n");
    /** 3. Feladat:
     *  Írja a nevét a megadott tömbe, majd írassa azt ki stringként.
     *  Célidő: 3 perc
     *  Teljesítési idő:
     */
     char array3[]="nev";


    printf("\n\n*** 4. feladat ***\n");
    /** 4. Feladat:
     *  Az előző feladatban bevitt névben lévő magánhangzókat cserélje le pontra. (Nagy -> N.gy)
     *  Célidő: 5 perc
     *  Teljesítési idő:
     */


    printf("\n\n*** 5. feladat ***\n");
    /** 5. Feladat:
     *  Törölje "var" értékét csak pointer használatával.
     *  Célidő: 2 perc
     *  Teljesítési idő:
     */
     int var=1000;


    printf("\n\n*** 6. feladat ***\n");
    /** 6. Feladat:
     *  Készítsen egy függvényt mely össze replusszol két számot.
     *  A megoldáshoz használjon a bementeben átadott memória címet!
     *  Célidő: 5 perc
     *  Teljesítési idő:
     */


     printf("\n\n*** Bonusz. feladat ***\n");
    /** Bónusz Feladat:
     *  Készítsen egy függvényt mely a bemenetében vár egy értéket és a egy pointeren keresztül
     *  a bevitt érték faktoriálisát adja vissza!
     *  Célidő: 5 perc
     *  Teljesítési idő:
     */


    return 0;
}
