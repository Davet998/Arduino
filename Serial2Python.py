import serial
import csv
ser = serial.Serial('COM6',9600)

try:
    while True:
        b = ser.readline()
        str_rn = b.decode()
        lhs, rhs = str_rn.split(";",1)
        val = int(lhs)
        cnt = int(rhs)
        with open('data.csv', 'a', newline='') as f:
            f_writer = csv.writer(f, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
            f_writer.writerow([val,cnt])
except KeyboardInterrupt:
    pass

ser.close()
