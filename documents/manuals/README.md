1. Skapa ett PDN: PMIC, Buck, LDO osv.
2. Skapa avlastningskondensatorer. Sätt dom nära pinnarna. 
3. Se till så uppstartsekvensen är proper.
4. Koppla resetsignalerna från PMIC till processorn
5. Koppla resetsignalerna från processorn till andra enheter.
6. Se till så huvudlockan har rätt konfiguration
7. Se till så kristallen till huvudklockan är rätt vald.
8. Implementera bootkonfigurationen 
9. Sätt oanvända till pull-up/down
10. Sätt icke användbara till flytande