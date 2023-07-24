/*select title from movies mov
inner join stars st on (st.movie_id = mov.id)
inner join people ppl on (ppl.id = st.person_id)
where ppl.name = 'Johnny Depp' and ppl.name = 'Helena Bonham Carter'; */

select title from movies mov
inner join stars st on (st.movie_id = mov.id)
inner join people ppl on (ppl.id = st.person_id)
where st.person_id = (select id from people where id = ppl.id)
 and  (ppl.name = 'Johnny Depp' or  ppl.name = 'Helena Bonham Carter' )
and (select count(*) from movies where title = mov.title = 2) ;