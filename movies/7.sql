select mov.title,rating  from ratings rat
inner join movies mov on (rat.movie_id = mov.id)
where mov.year = '2010' order by rat.rating desc , mov.title;