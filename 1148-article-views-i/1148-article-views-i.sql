# Write your MySQL query statement below
SELECT DISTINCT author_id as id FROM Views
WHERE author_id = viewer_id
GROUP BY author_id
ORDER BY author_id ASC;