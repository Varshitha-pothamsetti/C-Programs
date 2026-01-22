CREATE TABLE users(
     id INT,
     name VARCHAR(50) 	NOT NULL -- Enforces the dATA eRNTRY
);
INSERT INTO users VALUES(1, 'ALICE');
INSERT INTO users(id) VALUES(2);
SELECT* FROM users;
DESC users;
DROP TABLE users;