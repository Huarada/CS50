
select title from movies mov
inner join stars st on (st.movie_id = mov.id)
inner join people ppl on (ppl.id = st.person_id)
inner join ratings rat on (rat.movie_id = mov.id)
where ppl.name = 'Chadwick Boseman' order by rat.rating  desc limit 5