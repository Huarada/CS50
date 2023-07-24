--select st.* from people ppl
--inner join stars st on (st.person_id = ppl.id)
--where
--ppl.name = 'Kevin Bacon'



--select * from people
--where name = 'Johnny Depp' or name = 'Helena Bonham Carter';




/*select title from movies mov
inner join stars st on (st.movie_id = mov.id)
inner join people ppl on (ppl.id = st.person_id)
where mov.id = (select movie_id from stars where movie_id = st.movie_id)
 and  (ppl.name = 'Johnny Depp' or  ppl.name = 'Helena Bonham Carter' ) ; */


select title from movies mov
inner join stars st on (st.movie_id = mov.id)
inner join people ppl on (ppl.id = st.person_id)
where st.person_id = (select id from people where id = ppl.id)
 and  (ppl.name = 'Johnny Depp' or  ppl.name = 'Helena Bonham Carter' ) ;
--select * from stars
--where person_id  = '136' or person_id  = '307' order by movie_id;
