import serial

arduino = serial.Serial('COMS', 9600)

while True:
    try:
        leitura = arduino.readline().decode().strip()  
        if leitura: 
            temperatura = float(leitura)
            if temperatura < 10.5:
                arduino.write(b'B')
                print(f"A temperatura é de {temperatura}°C e está abaixo do esperado.")
            elif 10.5 <= temperatura < 11.5:  
                arduino.write(b'V')
                print(f"A temperatura é de {temperatura}°C e está na normalidade.")
            else:  
                arduino.write(b'R')
                print(f"A temperatura é de {temperatura}°C e está acima do esperado.")
    except Exception as e:
        print(f"Erro: {e}")
    except KeyboardInterrupt:
        break
    