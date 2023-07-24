select name from people ppl
inner join stars st on (st.person_id = ppl.id)
inner join movies mov on (st.movie_id = mov.id)
where mov.year = '2004' order by ppl.birth;