# Write your MySQL query statement below
SELECT Visits.customer_id,
COUNT(Visits.visit_id) AS count_no_trans
FROM Visits
WHERE visit_id NOT IN(SELECT visit_id FROM Transactions)
GROUP BY customer_id