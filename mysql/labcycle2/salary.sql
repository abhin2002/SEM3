
CREATE OR REPLACE TRIGGER salary_changes  
BEFORE DELETE OR INSERT OR UPDATE ON emp  
FOR EACH ROW  
WHEN (NEW.SSN > 0)  
DECLARE  
   sal_diff number;  
BEGIN  
   sal_diff := :NEW.Salary  - :OLD.Salary;  
   dbms_output.put_line('Old salary: ' || :OLD.salary);  
   dbms_output.put_line('New salary: ' || :NEW.salary);  
   dbms_output.put_line('Salary difference: ' || sal_diff);  
END;  
/  