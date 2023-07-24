select name from people ppl
inner join directors dir on (dir.person_id = ppl.id)
inner join movies mov on (dir.movie_id = mov.id)
inner join ratings rat on (rat.movie_id = mov.id)
where rat.rating >= '9';