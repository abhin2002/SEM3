CREATE OR REPLACE TRIGGER display_hour
BEFORE DELETE OR INSERT OR update on works_on

for each row
when (NEW.HOURS > 0)
DECLARE
    hour_diff number;
BEGIN
    hour_diff := :NEW.HOURS - :OLD.HOURS;
    dbms_output.put_line('Old time: ' || :OLD.HOURS);
    dbms_output.put_line('New time: ' || :NEW.HOURS);
    dbms_output.put_line('Time difference: ' || hour_diff);
END;
/