-- Keep a log of any SQL queries you execute as you solve the mystery.

/*select * from crime_scene_reports where (month = 7)
and (year = 2021) and (day = 28) and (street like "%Humphrey%"); */



--select id,name,transcript from interviews where transcript like "%bakery%" and day = 28;   -- SELECTED TRANSCRIPTS FROM INTERVIEWS

/*select * from bakery_security_logs where (activity = "exit") and (day = "28" ) and (hour = 10 ) and ( minute between 15 and 25 ); */  -- SELECT THE BAKERY STREETS SPECIFIED BY THE FIRST TESTIMONY

 /* select name, phone_number, passport_number, license_plate from atm_transactions atm  -- THOSE WHO QUALLIFY THOSE REQUISITES WERE PRONE TO witness THE CRIME, OR POSSIBLY DO IT. tHOSE WHO WITHDRAW GREAT AMOUNTS WERE PRONE TO DO IT TO SCAPE THE CRIME SCENE OR TO PAY A THIRD PARTY, IF THE FIRST CASE BROUGHT AN AIRPLANE TICKET, THEY ARE HIGHLY SUSPICIOUS
 inner join bank_accounts bnk on (bnk.account_number = atm.account_number)
 inner join people ppl on (bnk.person_id = ppl.id)
 where (year = 2021)
 and (month = 7)
 and (transaction_type = 'withdraw')
 and(day = 28)
 and (atm_location like '%Leggett%');     -- DATA OF THOSE WHO SUIT THE SECOND TESTIMONY */




 /*select name, phone_number, passport_number, license_plate from atm_transactions atm  -- THOSE WHO QUALLIFY THOSE REQUISITES WERE PRONE TO witness THE CRIME, OR POSSIBLY DO IT. tHOSE WHO WITHDRAW GREAT AMOUNTS WERE PRONE TO DO IT TO SCAPE THE CRIME SCENE OR TO PAY A THIRD PARTY, IF THE FIRST CASE BROUGHT AN AIRPLANE TICKET, THEY ARE HIGHLY SUSPICIOUS
 inner join bank_accounts bnk on (bnk.account_number = atm.account_number)
 inner join people ppl on (bnk.person_id = ppl.id)
 where (year = 2021)
 and (month = 7)
 and (transaction_type = 'withdraw')
 and(day = 28)
 and (atm_location like '%Leggett%')
 and (license_plate = '5P2BI95' or license_plate =  '94KL13X' or license_plate = '6P58WS2' or license_plate = '4328GD8' or license_plate =  'G412CB7' or license_plate =  'L93JTIZ'  or license_plate =  '322W7JE' or license_plate =  '0NTHK55'  );     -- DATA OF THOSE WHO SUIT THE first and the SECOND TESTIMONY
*/


/*select * from phone_calls
where (duration <60)
and day  = 28
and  ((caller = '(367) 555-5533')  or ( caller = "(770) 555-1861" ) or ( caller = "(829) 555-5269" ) or ( caller = "(389) 555-5198") ) ;*/





/* select *  from passengers pass -- THIS TABLE GIVES THE POSSIBLE SCAPE ROUTE OF THE CRIMINAL right after the day of the murder, ALSO SEE THOSE WITH THE SAME FLIGHT_ID. THE ACCOMPLICE POSSIBLY IS WITH THE CRIMINAL
inner join flights fly on (fly.id = pass.flight_id)
inner join airports air on (fly.destination_airport_id = air.id)
where ( day >= 28 ) and ((origin_airport_id = 8 ))      -- ORIGIN OF THE FLIGHT that is  fiftyville
and (passport_number = 5773159633) or passport_number = 5773159633

order by fly.day;
*/


 /* select * from atm_transactions atm  -- THOSE WHO QUALLIFY THOSE REQUISITES WERE PRONE TO witness THE CRIME, OR POSSIBLY DO IT. tHOSE WHO WITHDRAW GREAT AMOUNTS WERE PRONE TO DO IT TO SCAPE THE CRIME SCENE OR TO PAY A THIRD PARTY, IF THE FIRST CASE BROUGHT AN AIRPLANE TICKET, THEY ARE HIGHLY SUSPICIOUS
 inner join bank_accounts bnk on (bnk.account_number = atm.account_number)
 inner join people ppl on (bnk.person_id = ppl.id)
 where (year = 2021)
 and (month = 7)
 and (transaction_type = 'withdraw')
 and(day = 28)
 and (atm_location like '%Leggett%')
 and (license_plate = '5P2BI95' or license_plate =  '94KL13X' or license_plate = '6P58WS2' or license_plate = '4328GD8' or license_plate =  'G412CB7' or license_plate =  'L93JTIZ'  or license_plate =  '322W7JE' or license_plate =  '0NTHK55'  )
 and (name  = 'Bruce');     -- DATA OF THOSE WHO SUIT THE first and the SECOND TESTIMONY
*/


/*select name from phone_calls cal                             -- GIVES THE NAME OF BRUCE'S PARTNER
inner join people ppl on (ppl.phone_number = cal.receiver)
where (duration <60)
and day  = 28
and  (caller = '(367) 555-5533') ;
*/


/*select account_number,amount, transaction_type from atm_transactions where (year = 2021)    -- THOSE WHO QUALLIFY THOSE REQUISITES WERE PRONE TO witness THE CRIME, OR POSSIBLY DO IT. tHOSE WHO DEPOSITED GREAT AMOUNTS OF CASH POSSIBLY GOT THE MONEY BY ILLEGAL METHODS, LIKE BEING AN ACCOMPLICE FOR A CRIME
and (month = 7)
and(transaction_type = 'deposit')
and (atm_location like '%Humphrey%')
and amount >= 50; */





--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------

/*select passport_number,origin_airport_id, flight_id, city  from passengers pass -- THIS TABLE GIVES THE POSSIBLE SCAPE ROUTE OF THE CRIMINAL right after the day of the murder, ALSO SEE THOSE WITH THE SAME FLIGHT_ID. THE ACCOMPLICE POSSIBLY IS WITH THE CRIMINAL
inner join flights fly on (fly.id = pass.flight_id)
inner join airports air on (fly.destination_airport_id = air.id)
where ( day >= 28 ) and ((origin_airport_id = 1 ))    --or  (origin_airport_id = 8))  -- ORIGIN OF THE FLIGHT that is close to Tenesse - fiftyville or chicago
order by fly.day;*/





/*select name,bnk.account_number from people ppl                               -- GOT THE NAME OF THOSE WHO QUALLIFY THOSE REQUISITES WERE PRONE TO witness THE CRIME, OR POSSIBLY DO IT. tHOSE WHO WITHDRAW GREAT AMOUNTS WERE PRONE TO DO IT TO SCAPE THE CRIME SCENE OR TO PAY A THIRD PARTY, IF THE FIRST CASE BROUGHT AN AIRPLANE TICKET, THEY ARE HIGHLY SUSPICIOUS
inner join bank_accounts bnk on (bnk.person_id == ppl.id)
inner join atm_transactions atm on (atm.account_number = bnk.account_number)
where (atm.year = 2021)
and (atm.month = 7)
and(atm.transaction_type = 'withdraw')
and (atm.atm_location like '%Humphrey%')
and atm.amount >= 50; */

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------



/* select account_number,amount, transaction_type from atm_transactions where (year = 2021)    -- THOSE WHO QUALLIFY THOSE REQUISITES WERE PRONE TO witness THE CRIME, OR POSSIBLY DO IT. tHOSE WHO WITHDRAW GREAT AMOUNTS WERE PRONE TO DO IT TO SCAPE THE CRIME SCENE OR TO PAY A THIRD PARTY, IF THE FIRST CASE BROUGHT AN AIRPLANE TICKET, THEY ARE HIGHLY SUSPICIOUS
and (month = 7)
and(transaction_type = 'withdraw')
and (atm_location like '%Humphrey%')
and amount >= 50;
*/