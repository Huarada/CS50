select avg(rating) from ratings rat
inner join movies mov on (rat.movie_id = mov.id)
where mov.year = '2012';