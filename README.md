# OverPCB
Desenvolupació de la placa de proves 

1 INTRODUCCIÓ
Aquest projecte conté els dissenys i les especificacions tècniques suficients per al desenvolupament d’un prototip per desenvolupar una placa educativa per aprendre a programar.
La placa permetrà realitzar practiques amb entrada i sortida digital i analògiques. Finalment permetrà comunicar-se digitalment per SPI, I2C i UART.
L’entrada analògica serà una LDR amb guany i compensació analògica, però amb filtre digital processat pel microcontrolador i la sortida analògica serà una sortida de modulació del ample del pols.
La placa té una pantalla LCD 16x2 HD44780, aquesta serà connectada amb 4 bits. L’emissor i el receptor infraroig seran sense modulació per poder desenvolupar protocols de comunicació simples. L’Emissor tindrà l’opció d’afegir-hi una portadora i desenvolupar comandaments a distància.
La comunicació SPI s’hi afegirà un sensor termoparell, per poder obtenir les dues temperatures.
La comunicació I2C hi haurà un RTC2, un acceleròmetre i un port de connexió extra per comunicar-nos o bé amb altres plaques o perifèrics.
La comunicació UART es farà a través del connector ICSP de programació.

2 La placa
Aquesta placa ens ha permet realitzar practiques d’electrònica, com per exemple com realitzar la instrumentació d’un sensor de llum. Per altre banda el microcontrolador ens ha de comunicar-se amb perifèrics, com sensors de temperatura i un rellotge, amés de comunicar-se entre elles.
Una altre exigència a complir es realitzar tallers de enginyeria inversa, com per exemple descobrir el xifrat d’un comandament a distància dels projectors i replicar la seva senyal. Finalment interfícies d’home maquina per comunicar-se i poder realitzar funcions.
El microcontrolador ens limitarà més o menys les funcions de la placa. S’ha escollit el PIC16F18855, aquest té mòduls PWM, I2C, SPI, UART i temporitzadors suficients per complir amb l’abast del projecte. Amés aquest microcontrolador té un mòdul que permet escollir el pin per on entrarà o sortirà la funció d’un mòdul, aquesta propietat ens permet fer circuits impresos més senzills el poder intercanviar les funcions dels pins.
El PPS ens permet usar el intercanviador de pins en el disseny del circuit imprès, això fa que l’esquema i la placa tinguin algun pin del microcontrolador canviar però simplificant el circuit i les practiques de enginyeria inversa.
A continuació es mostra una taula amb les funcions de cada pin.
El I2C serà el principal protocol de comunicació digital de la placa, tindrà un rellotge amb alarma, aquest ens permetrà saber la hora i la data. A més hi hauria la possibilitat de soldar-hi un acceleròmetre o giroscopi.
Finalment hi haurà un connector extra I2C per permetre la comunicació entre plaques. O bé l’opció d’incloure sensors I2C com per exemple, detectors de color, pantalles, sensors de magnituds ambientals (temperatura, pressió atmosfèrica i humitat), sensors de contaminants i controls d’atmosfera.
El MCP79410 és rellotge de temps real amb calendari, ens permetrà saber la hora i el dia tot i desconnectar la potència principal de la placa. El RTC2 tindrà un suport amb una pila de 3 volts per alimentar de forma ininterrompuda quan desconnectem la font principal de la placa.
Amés aquest dispositiu també ens ofereix una memòria SRAM de 64 Bytes i 128 bytes de EEPROM. La memòria EEPROM té proteccions a l’escriptura per programa. En situacions que ho requereixin per les necessitats del programa i necessitem un extra de memòria, ens hi podrem adreçar i ampliar la memòria per I2C
Pels usuaris més avençats s’hi ha afegit un connector per poder-hi agregar un acceleròmetre ADXL345 o bé un giroscopi GY-521. Tots dos es comuniquen per I2C i tenen la mateixa distribució de pins.
La comunicació per SPI només es comunicarà amb el dispositiu MAX 31855, aquest sensor és un convertidor analògic a digital per a termoparells. Amés té compensador d’unió freda, apart de usar-la per donar-nos correctament la temperatura calenta també ens dona la temperatura ambient.
La entrada analògica està basada amb una LDR de 20KΩ. Aquesta amb un divisor de tensió obtenir un voltatge variable en funció de la intensitat lumínica que rep el sensor.
La senyal obtinguda per la LDR s’ha d’instrumentar amb operacions analògiques. Aquesta està formada per un amplificador no inversor i un amplificador diferencial.
La placa té de 4 polsadors, aquests són els necessaris per obtenir una navegació pels menús del programa. Una pantalla LCD de 16X2 connectada amb el protocol paral·lel HD44780.El LED de la pantalla, està connectat al PIC, d’aquesta manera la podem controlar tant digitalment com per PWM.
Per regular el contrast de la pantalla s’usa un potenciòmetre connectat entre 5 vols i GND. Cada pantalla s’haurà d’ajustar a causa que cada una d’elles té un voltatge de contrast diferent, amés que aquest pot canviar en funció la temperatura que es troba la pantalla.
La placa conté un receptor i un emissor infraroig. Aquests són de 940nm, aquesta és la mateixa longitud d’ona dels comandaments a distàncies comercials. Aquests mòduls han sigut incorporats per poder substituir els comandaments dels projectors, televisors o bé per crear ponts i amplificador per un dispositiu amb comandament a distàncies per infraroig
El LED RGB, el podem usar per diverses coses, des de la identificació dels membres que organitzen l’esdeveniment mitjançant un codi cromàtic fins a la comunicació de colors entre plaques. Perquè aquesta comunicació sigui possible s’ha d’incorporar un sensor de color pel port I2C.
La comunicació sèrie és un estàndard de comunicació que s’utilitza amb molts de sensors i actuadors, com per exemple GPS, ZigBee, empremtes digitals, gasos, etc.
La alimentació de la placa és una bateria de 9V de Ni-Cd. La pila PP3 té una autonomia de 15 hores.

3 Programa de test
La placa tindrà un petit programa de test, aquest programa farà una petita demostració de les capacitat de la placa. Haurà de funcionar els quatre polsadors, la pantalla, el LED RGB, el LED de la pantalla, el protocol I2C i el SPI.
En el moment que posem en marxa la pantalla mostra l’esdeveniment “OVERDRIVE Con” a la part superior de la pantalla i a la inferior “2018 CD170 UdG”. El LED RGB apagat igual que la il·luminació de la pantalla. Un cop encesa la placa cada boto fa una funció diferent i ens permet usar diferents funcions de la placa.
Amb el boto de pujar s’encén el LED RGB de color vermell i LED de la pantalla, el missatge de la pantalla canvia, Surt “DefCon Girona” a la fila superior i a la inferior “DefCon Group 170”. En aquest menú es podria posar un grup de hackers els quals se’ls hi regali la placa, com per exemple la DC801, que és de Utah EUA.
Amb el polsador de baixar ens mostra la hora de Catalunya, amb la pantalla encesa i el LED RGB de color blau ens mostra a la fila superior “Catalonia’s Time” i la zona inferior surt la data i la hora definida pel programa. Aquesta hora no es pot canviar des de la placa.
Amb el boto de accés el LED RGB regula la intensitat de color blanc amb funció de la entrada analògica. Amb es mostra la temperatura de la junta freda del sensor SPI i la pantalla romà encesa.
Finalment amb el polsador omet torna a visualitza el missatge del moment de la encesa i amb els LEDS apagats.

4 Conclusions
La placa permet realitzar practiques amb entrada i sortida digital. Amés a més entrades i sortides analògiques i finalment comunicar-se digitalment per SPI, I2C i UART.
El disseny ha té una pantalla LCD 16x2 HD44780, comunicada amb 4 bits.
L’entrada analògica és una LDR amb guany i compensació analògica, però amb filtre digital processat pel microcontrolador.
El disseny permet que les plaques es puguin comunicar per infrarojos. L’emissor i el receptor infraroig són sense modulació això permet desenvolupar protocols personalitzats. Amés podem llegir senyals amb portadors.
La comunicació SPI s’hi es realitza amb sensor termoparell i la comunicació I2C amb un RTC2, un acceleròmetre i un port de connexió extra per comunicar-se amb altres plaques.
La comunicació UART es realitza a través del connector ICSP de programació.
