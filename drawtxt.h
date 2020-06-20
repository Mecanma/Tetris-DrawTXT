/*
librería gráfica de consola.
© DEQ2000 - CompuHiperMegaRed 2019-2020


CÓDIGO ABIERTO. SI DESEA EDITAR, AGREGAR O QUITAR DEBE NOTIFICARME.

Como surgio esto¿ Fue en una edad temprana para un lenguaje no integrado para gràficos.

La primera etapa:

    LA ETAPA en donde aprendi el lenguaje batch. tambien conocido como lotes, tomando lenguajes hibridos en el.
    de asi es como comprendi en que se podria crear graficos basicos en la CONSOLA [CMD].
    el primer motor fue llamado con el mismo nombre 'PixelDrawTXT', en los primeros lanzamientos fue llamado como 'P2'
    el programa era ejecutado como "externo" Luego e llamo DrawTXT.exe y como punto final "PixelDrawTXT.exe".
    luego de la 3 versión fue integrandose como ejecución en procesos separados. esto facilito la velocidad de su ejecución.
    Primero fue DEMO como fifos (PIPES) por tuberias fifos esto no funciono mucho como se esperaba.
    luego ocurri a procesos de canalizaciones entre procesos de ejecucion.

La segunda etapa:

    fue algo facil recrear todo de nuevo y ya con la experiencia en graficos salio PixelDrawTXT-s-v3/v4.exe
    el proyecto fue cresiendo mas y mas en las redes de consolas CMD - DosTips@.


La librería seria el motor grafico usado para correr graficos en PixelDrawTXT.exe y versiones GDI en la v4.

-----------------------------------------------------------------------------------------------------------------------------------
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒░░░░▒▒▒▒▒░▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒░░░░░▒▒▒░░░▒▒▒▒▒<▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░▒▒░░░░░▒▒▒░░<▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░░<<▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░<▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░░░░░<▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▒▒░░░░░░░░░░░▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▒░░░░░░░░░▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒░░░░░░░░░▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒░░░░▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░▒▒▒▒▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░▒▒▒▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▒▒░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░▒░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒░▒░░▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒░░░░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒░░▒▒░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒░░*▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒░░<<▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░<▒▒▒░░▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒░▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░<░░░░░▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░░░░░▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒░░░░░░░▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░░░░░▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒░░░░░░░░░░░░░░░..▒░░░░░░▒▒▒▒▒░░░░▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░.▒▒▒░░░░░░▒▒▒▒▒░▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒+░░░░░░░░░░░░.▒▒▒▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▒░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░▒▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒<▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒<<░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒<░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒*░░░░░▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒░░░▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░▒▒▒░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒░░░░░░░░▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒░░░░░░▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒░▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒░▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒░▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
-----------------------------------------------------------------------------------------------------------------------------------

*/

#ifndef __dartxt_h__
#define __dartxt_h__
#include <windows.h>
#include <vector>
#include <ctime>
#include <math.h>
#include <cstdint>
#include <stdint.h>
#include <chrono>
#include <typeinfo>
#include <fstream>
#define PI acos(-1)
#pragma comment(lib, "winmm.lib")

auto RENDER_FPS = 0;

struct GameTimer_t{
    using clk         = std::chrono::steady_clock;
    using nano_t      = std::chrono::duration<uint64_t, std::ratio<1,1000000000>>;
    using timepoint_t = std::chrono::time_point<clk, nano_t>;

    explicit GameTimer_t() noexcept {
        start();
    };

    void start() noexcept { m_start = clk::now(); }
    uint64_t ellapsed() noexcept {
        auto ns_passed { clk::now() - m_start };
        return ns_passed.count();
    }

    uint64_t waitUntil_ns(uint64_t to_ns) {
        if ( ellapsed() < to_ns ) {
            auto towait { to_ns - ellapsed() };
            Sleep(towait);
                return towait;
        }
        return 0;
    };

private:
    timepoint_t m_start;
};

bool RENDER_INICIADO = false;
const HANDLE wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
const HANDLE rHnd = GetStdHandle(STD_INPUT_HANDLE);
SMALL_RECT windowSize;
COORD characterBufferSize;
COORD characterPosition = {0, 0};
SMALL_RECT consoleWriteArea;
CHAR_INFO consoleBuffer[MAXBYTE*MAXBYTE*2];

int W_RENDER_DEQ2000;
int H_RENDER_DEQ2000;

struct ESTADOS_MOUSE
  {
    bool bPressed;
    bool bReleased;
    bool bHeld;
  } m_mouse[5];

  bool m_mouseOldState[5] = { 0 };
  bool m_mouseNewState[5] = { 0 };
  bool m_bConsoleInFocus = true;

  int m_mousePosX;
  int m_mousePosY;

// ###################################################
// ###################################################
// ################ FUNCIONES DEL MOUSE# #############
// ###################################################
// ###################################################

void Mouse_Inputs(){
  INPUT_RECORD inBuf[32];
  DWORD events = 0;
  GetNumberOfConsoleInputEvents(rHnd, &events);
  if (events > 0)
    ReadConsoleInput(rHnd, inBuf, events, &events);
  for (DWORD i = 0; i < events; i++){
    switch (inBuf[i].EventType){
      case FOCUS_EVENT:{ m_bConsoleInFocus = inBuf[i].Event.FocusEvent.bSetFocus; } break;
      case MOUSE_EVENT:{ switch (inBuf[i].Event.MouseEvent.dwEventFlags){ case MOUSE_MOVED:{
        m_mousePosX = inBuf[i].Event.MouseEvent.dwMousePosition.X;
        m_mousePosY = inBuf[i].Event.MouseEvent.dwMousePosition.Y;
      } break;
      case 0:{ for (int m = 0; m < 5; m++) m_mouseNewState[m] = (inBuf[i].Event.MouseEvent.dwButtonState & (1 << m)) > 0; } break;
      default: break;
    }
  } break;
  default: break;
}
}
for (int m = 0; m < 5; m++){
  m_mouse[m].bPressed = false;
  m_mouse[m].bReleased = false;
  if (m_mouseNewState[m] != m_mouseOldState[m]){
    if (m_mouseNewState[m]){
      m_mouse[m].bPressed = true;
      m_mouse[m].bHeld = true;
    } else {
      m_mouse[m].bReleased = true;
      m_mouse[m].bHeld = false;
    }
  }
  m_mouseOldState[m] = m_mouseNewState[m];
}
}

int getmousex() { return m_mousePosX; }
int getmousey() { return m_mousePosY; }
ESTADOS_MOUSE getmouse(int nMouseButtonID) { return m_mouse[nMouseButtonID]; }
ESTADOS_MOUSE mouse(int nMouseButtonID) { return m_mouse[nMouseButtonID]; }
bool isfocused() { return m_bConsoleInFocus; }
bool enfocado() { return m_bConsoleInFocus; }


int mousex(){ return m_mousePosX;}
int mousey(){ return m_mousePosY;}
bool click(int nMouseButtonID = 0){
  switch(nMouseButtonID){
    case 0:{
      return m_mouse[0].bPressed;
      break;
    }
    case 1:{
      return m_mouse[0].bReleased;
      break;
    }
    case 2:{
      return m_mouse[0].bHeld;
      break;
    }
  }
  return 0;
}

bool izquierdo(int nMouseButtonID = 0){
  switch(nMouseButtonID){
    case 0:{
      return m_mouse[0].bPressed;
      break;
    }
    case 1:{
      return m_mouse[0].bReleased;
      break;
    }
    case 2:{
      return m_mouse[0].bHeld;
      break;
    }
  }
  return 0;
}

bool derecho(int nMouseButtonID = 0){
  switch(nMouseButtonID){
    case 0:{
      return m_mouse[1].bPressed;
      break;
    }
    case 1:{
      return m_mouse[1].bReleased;
      break;
    }
    case 2:{
      return m_mouse[1].bHeld;
      break;
    }
  }
  return 0;
}

bool medio(int nMouseButtonID = 0){
  switch(nMouseButtonID){
    case 0:{
      return m_mouse[2].bPressed;
      break;
    }
    case 1:{
      return m_mouse[2].bReleased;
      break;
    }
    case 2:{
      return m_mouse[2].bHeld;
      break;
    }
  }
  return 0;
}

bool enfoco() { return m_bConsoleInFocus; }

// ############################
// ############################
// ###### FUNCION LINEATO #####
// ######### VARIABLES ########
// ############################
int LINEATOX = 0;
int LINEATOY = 0;
int LINEATO = 0;

void salir();

int iniciar(int W, int H, std::string TITULO = "", int FONT = 0,  int fontw = 8, int fonth = 8, bool Verificacion = 1){
    RENDER_INICIADO = true;
    W_RENDER_DEQ2000 = W;
    H_RENDER_DEQ2000 = H;
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(wHnd, &info);
    SetConsoleTitle((LPCSTR)TITULO.c_str());
    char A[100];
    sprintf(A, "@mode %d,%d", W, H);

    if (!SetConsoleActiveScreenBuffer(wHnd)){
      salir();
    }

    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = fontw;
    cfi.dwFontSize.Y = fonth;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    if(FONT==0){
    	wcscpy_s(cfi.FaceName, L"Lucida");
    } else {wcscpy_s(cfi.FaceName, L"Consolas");
    }

    if (!SetCurrentConsoleFontEx(wHnd, false, &cfi))
      return 1;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (!GetConsoleScreenBufferInfo(wHnd, &csbi))
      return 1;

    if(Verificacion==1){
      if (H_RENDER_DEQ2000 > csbi.dwMaximumWindowSize.Y){
        salir();
      }

    if (W_RENDER_DEQ2000 > csbi.dwMaximumWindowSize.X){
      salir();
    }
  }


    system(A);

    windowSize = {0, 0, (short)(W-1), (short)(H-1)};
    characterBufferSize = {(short)W, (short)H};
    consoleWriteArea = {0, 0, (short int)(W-1), (short int)(H-1)};
    consoleBuffer[W * H];
    return RENDER_INICIADO;
}

void pintar(int esperar = 0){
    if (RENDER_INICIADO){
      if(!SetConsoleMode(rHnd, ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT))
        return;
        Mouse_Inputs();
        Sleep(esperar);
        WriteConsoleOutputA(wHnd, consoleBuffer, characterBufferSize, characterPosition, &consoleWriteArea);
    }
}

void salir(){
	CloseHandle(wHnd);
	CloseHandle(rHnd);
}

// #######################################
// #######################################
// ######## FUNCIONES DE TECLADO #########
// #######################################
// #######################################

bool keydown(BYTE K){
  if(enfoco()){
    return GetAsyncKeyState(K) < 0;
  }
  return 0;
}

bool tecla(BYTE K){
  if(enfoco()){
    return GetAsyncKeyState(K) < 0;
  }
  return 0;
}

// ####################################################
// ####################################################
// ############# FUNCIONES DE GRAFICOS ################
// ####################################################
// ####################################################

// ##################################################
// ############# BORRADO DE PANTALLA ################
// ##################################################
void fondo(unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
	for (int x = 0; x < W_RENDER_DEQ2000; ++x)
	{
		for (int y = 0; y < H_RENDER_DEQ2000; ++y)
		{
			if(x>=0 && y>=0 && W_RENDER_DEQ2000>x && H_RENDER_DEQ2000>y){
			consoleBuffer[x + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)Caracter;
			consoleBuffer[x + W_RENDER_DEQ2000 * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
			}
		}
	}
}

void borrar(){
    for (int x = 0; x < W_RENDER_DEQ2000; ++x)
    {
        for (int y = 0; y < H_RENDER_DEQ2000; ++y)
        {
            if(x>=0 && y>=0 && W_RENDER_DEQ2000>x && H_RENDER_DEQ2000>y){
            consoleBuffer[x + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)219;
            consoleBuffer[x + W_RENDER_DEQ2000 * y].Attributes = 0;
            }
        }
    }
}

void clear(){
    for (int x = 0; x < W_RENDER_DEQ2000; ++x)
    {
        for (int y = 0; y < H_RENDER_DEQ2000; ++y)
        {
            if(x>=0 && y>=0 && W_RENDER_DEQ2000>x && H_RENDER_DEQ2000>y){
            consoleBuffer[x + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)219;
            consoleBuffer[x + W_RENDER_DEQ2000 * y].Attributes = 0;
            }
        }
    }
}

// #######################################
// ############ PIXELES Y MAS ############
// #######################################

void gotoxy(int x = 0, int y = 0, unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
    if(x>=0 && y>=0 && W_RENDER_DEQ2000>x && H_RENDER_DEQ2000>y){
    consoleBuffer[x + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)Caracter;
    consoleBuffer[x + W_RENDER_DEQ2000 * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
    }
}

void pixel(int x = 0, int y = 0, unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
    if(x>=0 && y>=0 && W_RENDER_DEQ2000>x && H_RENDER_DEQ2000>y){
    consoleBuffer[x + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)Caracter;
    consoleBuffer[x + W_RENDER_DEQ2000 * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
    }
}

void texto(int x = 0, int y = 0, std::string texto = "", unsigned int Fondo = 0, unsigned int  Texto = 15){
  for (int i = 0; i < strlen(texto.c_str()); ++i)
  {
    gotoxy(i+x,y, texto[i], Fondo, Texto);
  }
}

void textoalpha(int x = 0, int y = 0, std::string texto = "", unsigned int Fondo = 0, unsigned int  Texto = 15){
  for (int i = 0; i < strlen(texto.c_str()); ++i)
  {
    if(texto[i]!=' '){
        gotoxy(i+x,y, texto[i], Fondo, Texto);
    }
  }
}

void textofile(int x = 0, int y = 0, std::string File = "", unsigned int Fondo = 0, unsigned int Texto = 15){
  FILE* Archivo_Al_Leer;
        Archivo_Al_Leer = fopen(File.c_str(), "r");
  char caracter;
  int avanza = 0;
  int Volver_al_Inicio = x;
        while((caracter=fgetc(Archivo_Al_Leer))!= EOF){
          if (toupper(caracter)==10){
            x =( Volver_al_Inicio - avanza );
            y++;
          } else {
            if (x+avanza>=0 && y>=0 && x+avanza<=(W_RENDER_DEQ2000-1) && y<=(H_RENDER_DEQ2000-1)){
              consoleBuffer[x+avanza + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)caracter;
              consoleBuffer[x+avanza + W_RENDER_DEQ2000 * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
            }
          avanza++;
          }
        }
        fclose(Archivo_Al_Leer);
}

void textofilealpha(int x = 0, int y = 0, std::string File = "", unsigned int Fondo = 0, unsigned int Texto = 15){
  FILE* Archivo_Al_Leer;
        Archivo_Al_Leer = fopen(File.c_str(), "r");
  char caracter;
  int avanza = 0;
  int Volver_al_Inicio = x;
        while((caracter=fgetc(Archivo_Al_Leer))!= EOF){
          if (toupper(caracter)==10){
            x =( Volver_al_Inicio - avanza );
            y++;
          } else {
            if (caracter!=' '){
                if (x+avanza>=0 && y>=0 && x+avanza<=(W_RENDER_DEQ2000-1) && y<=(H_RENDER_DEQ2000-1)){
                    consoleBuffer[x+avanza + W_RENDER_DEQ2000 * y].Char.AsciiChar = (unsigned char)caracter;
                    consoleBuffer[x+avanza + W_RENDER_DEQ2000 * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
                }
            }
          avanza++;
          }
        }
        fclose(Archivo_Al_Leer);
}

void csprite(std::vector<unsigned char> name, int x = 0, int y = 0, int ancho = 0, int alto = 0, unsigned int Fondo = 0, unsigned int Texto = 15, unsigned char Delete_Caracters='.'){
    int Data = 0;
    for (int i = 0; i < alto; ++i){
        for (int o = 0; o < ancho; ++o){
            if((char)name[Data]!=(char)Delete_Caracters)
              gotoxy(o+x,i+y, (name[Data]), Fondo, Texto);
            Data++;
        }
    }
}

unsigned int DimencionesSprites(int &W, int &H, const std::string namefile){
  int WB=0;
  char linea[1024];
  char *LW;
  FILE *fich = fopen(namefile.c_str(), "r");
  while(fgets(linea, 1024, (FILE*)fich)){
    LW = linea;
    WB=strlen(LW);
    if(WB>W){
      W=strlen(LW)-1;
    }
    H++;
  }
  fclose(fich);
  return W*H;
}

void spritedq(int X, int Y, const std::string Name, int Centro){
  char c;
  int X_, Y_;
  int i=0, o=0;
  int lin=0, col=0;
    unsigned int color=0;
    if(Centro){ DimencionesSprites(lin,col,Name); }
    int FX=lin/2;
    int FY=col/2;

  FILE *archivo = fopen(Name.c_str(), "r");
  while ((c=fgetc(archivo))!= EOF){
    if(toupper(c)=='0'){ color =  0; }
    if(toupper(c)=='1'){ color =  1; }
    if(toupper(c)=='2'){ color =  2; }
    if(toupper(c)=='3'){ color =  3; }
    if(toupper(c)=='4'){ color =  4; }
    if(toupper(c)=='5'){ color =  5; }
    if(toupper(c)=='6'){ color =  6; }
    if(toupper(c)=='7'){ color =  7; }
    if(toupper(c)=='8'){ color =  8; }
    if(toupper(c)=='9'){ color =  9; }
    if(toupper(c)=='A'){ color = 10; }
    if(toupper(c)=='B'){ color = 11; }
    if(toupper(c)=='C'){ color = 12; }
    if(toupper(c)=='D'){ color = 13; }
    if(toupper(c)=='E'){ color = 14; }
    if(toupper(c)=='F'){ color = 15; }
    if(toupper(c)==10){o+=1; i=-1;} else {
    if(toupper(c)==32 || c==46){i=i;} else {
        X_=i-FX;
        Y_=o-FY;
        pixel(X_+X,Y_+Y, 219, color, color);
      }
      }
      i++;
  }
  i=0, o=0;
  fclose(archivo);
}

void voltear(int *a, int *b){
  int CopA = *a;
  int CopB = *b;
  if (*b<*a){
    *a = CopB;
    *b = CopA;
  }
}

void rectangulofill(int x = 0, int y = 0, int w = 0, int h = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  voltear(&x, &w);
  voltear(&y, &h);
  for (int X = x; X < w; ++X)
  {
    for (int Y = y; Y < h; ++Y)
    {
      pixel(X,Y, Caracter, Fondo, Texto);
    }
  }
}

void lineax(int x = 0, int w = 0, int y = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
    voltear(&x, &w);
    for (int i = x; i < w; ++i)
    {
        pixel(i,y, Caracter, Fondo, Texto);
    }
}

void lineay(int y = 0, int h = 0, int x = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
    voltear(&y, &h);
    for (int i = y; i < h; ++i)
    {
        pixel(x,i, Caracter, Fondo, Texto);
    }
}

void linea(int x0 = 0, int y0 = 0, int x1 = 0, int y1 = 0, unsigned char Caracter = 219, unsigned int  Fondo = 0, unsigned int Texto = 15){
    int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
    int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1;
    int err = (dx>dy ? dx : -dy)/2, e2;
    while(true){
      if (x0>=0 && y0>=0 && x0<=(W_RENDER_DEQ2000-1) && y0<=(H_RENDER_DEQ2000-1)){
        consoleBuffer[x0 + W_RENDER_DEQ2000 * y0].Char.AsciiChar = (unsigned char)Caracter;
        consoleBuffer[x0 + W_RENDER_DEQ2000 * y0].Attributes = (WORD) ( (Fondo << 4) | Texto);
      }
      if (x0==x1 && y0==y1) break;
      e2 = err;
      if (e2 >-dx) { err -= dy; x0 += sx; }
      if (e2 < dy) { err += dx; y0 += sy; }
    }
}

void rectangulo(int X = 0, int Y = 0, int X2 = 0, int Y2 = 0, unsigned char caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  linea(X, Y, X2, Y, caracter, Fondo, Texto);
  linea(X2,Y, X2,Y2, caracter, Fondo, Texto);
  linea(X2,Y2, X,Y2, caracter, Fondo, Texto);
  linea(X, Y2, X, Y, caracter, Fondo, Texto);
}

void lineato(int x = 0, int y = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  if(LINEATO==0){
    LINEATOX = x;
    LINEATOY = y;
    LINEATO = 1;
  }
  linea(LINEATOX,LINEATOY,x,y, Caracter, Fondo, Texto);
  LINEATOX = x;
  LINEATOY = y;
}

void circulo(int xc = 0, int yc = 0, int r = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  int x = 0;
  int y = r;
  int p = 3 - 2 * r;
  if (!r) return;
  while (y >= x){
  pixel(xc - x, yc - y, Caracter, Fondo, Texto);
  pixel(xc - y, yc - x, Caracter, Fondo, Texto);
  pixel(xc + y, yc - x, Caracter, Fondo, Texto);
  pixel(xc + x, yc - y, Caracter, Fondo, Texto);
  pixel(xc - x, yc + y, Caracter, Fondo, Texto);
  pixel(xc - y, yc + x, Caracter, Fondo, Texto);
  pixel(xc + y, yc + x, Caracter, Fondo, Texto);
  pixel(xc + x, yc + y, Caracter, Fondo, Texto);
  if (p < 0) p += 4 * x++ + 6;
  else p += 4 * (x++ - y--) + 10;
}
}

void circulofill(int xc = 0, int yc = 0, int r = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  int x = 0;
  int y = r;
  int p = 3 - 2 * r;
  if (!r) return;
  auto drawline = [&](int sx, int ex, int ny){
    for (int i = sx; i <= ex; i++)
      pixel(i, ny, Caracter, Fondo, Texto);
  };
  while (y >= x){
    drawline(xc - x, xc + x, yc - y);
    drawline(xc - y, xc + y, yc - x);
    drawline(xc - x, xc + x, yc + y);
    drawline(xc - y, xc + y, yc + x);
    if (p < 0) p += 4 * x++ + 6;
    else p += 4 * (x++ - y--) + 10;
  }
}

void ellipse(int xc = 0, int yc = 0, int rx = 0, int ry = 0, unsigned char caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  if (rx<=1)
    rx=1;
  if (ry<=1)
    ry=1;
   float x,y,rx2,ry2,p1,p2;
   x=0;
   y=ry;
   gotoxy(xc, yc+ry, caracter, Fondo, Texto);
   gotoxy(xc, yc-ry, caracter, Fondo, Texto);
   rx2=pow(rx,2);
   ry2=pow(ry,2);
   p1=ry2-(rx2*ry)+(0.25*rx2);
   while((ry2*x)<(rx2*y))
      {
      if(p1<0)
         { x++;
           p1=p1+(2*ry2*x)+ry2;
         }
      else
         {
           x++; y--;
           p1=p1+(2*ry2*x)-(2*rx2*y)+ry2;
         }
      gotoxy(xc+x,yc+y, caracter, Fondo, Texto);
      gotoxy(xc-x,yc+y, caracter, Fondo, Texto);
      gotoxy(xc+x,yc-y, caracter, Fondo, Texto);
      gotoxy(xc-x,yc-y, caracter, Fondo, Texto);
      }
   p2=(ry2)*pow((x+0.5),2)+(rx2)*pow((y-1),2)-(rx2*ry2);
   while(y>0)
      {
         if (p2>0)
         {
           y--;
           p2=p2-(2*rx2*y) +rx2;
         }
         else
         {
           x++; y--;
           p2=p2+ (2*ry2*x)-(2*rx2*y)+rx2;
         }
         gotoxy(xc+x,yc+y, caracter, Fondo, Texto);
         gotoxy(xc-x,yc+y, caracter, Fondo, Texto);
         gotoxy(xc+x,yc-y, caracter, Fondo, Texto);
         gotoxy(xc-x,yc-y, caracter, Fondo, Texto);
      }
}

void ellipsefill(int xc = 0, int yc = 0, int rx = 0, int ry = 0, unsigned char caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 1){
  if (rx<=1)
    rx=1;
  if (ry<=1)
    ry=1;
   float x,y,rx2,ry2,p1,p2;
   x=0;
   y=ry;
  auto drawline = [&](int sx, int ex, int ny){
    for (int i = sx; i <= ex; i++)
      pixel(i, ny, caracter, Fondo, Texto);
  };
   gotoxy(xc, yc+ry, caracter, Fondo, Texto);
   gotoxy(xc, yc-ry, caracter, Fondo, Texto);
   rx2=pow(rx,2);
   ry2=pow(ry,2);
   p1=ry2-(rx2*ry)+(0.25*rx2);
   while((ry2*x)<(rx2*y))
      {
      if(p1<0)
         { x++;
           p1=p1+(2*ry2*x)+ry2;
         }
      else
         {
           x++; y--;
           p1=p1+(2*ry2*x)-(2*rx2*y)+ry2;
         }
         drawline(xc-x,xc+x,yc-y);
         drawline(xc-x,xc+x,yc+y);
      }
   p2=(ry2)*pow((x+0.5),2)+(rx2)*pow((y-1),2)-(rx2*ry2);
   while(y>0)
      {
         if (p2>0)
         {
           y--;
           p2=p2-(2*rx2*y) +rx2;
         }
         else
         {
           x++; y--;
           p2=p2+ (2*ry2*x)-(2*rx2*y)+rx2;
         }
         drawline(xc-x,xc+x,yc+y);
         drawline(xc-x,xc+x,yc-y);
      }
}

void polyrectangulo(int X1 = 0, int Y1 = 0, int X2 = 0, int Y2 = 0, int X3 = 0, int Y3 = 0, int X4 = 0, int Y4 = 0, unsigned char Caracter = 219,  unsigned int Fondo = 0,  unsigned int Texto = 15){
  linea(X1, Y1, X2, Y2, Caracter, Fondo, Texto);
  linea(X2, Y2, X3, Y3, Caracter, Fondo, Texto);
  linea(X3, Y3, X4, Y4, Caracter, Fondo, Texto);
  linea(X4, Y4, X1, Y1, Caracter, Fondo, Texto);
}

void triangulo(int X1 = 0, int Y1 = 0, int X2 = 0, int Y2 = 0, int X3 = 0, int Y3 = 0, unsigned char caracter = 219, unsigned int Fondo = 0,  unsigned int Texto = 15){
  linea(X1, Y1, X2, Y2, caracter, Fondo, Texto);
  linea(X2, Y2, X3, Y3, caracter, Fondo, Texto);
  linea(X3, Y3, X1, Y1, caracter, Fondo, Texto);
}

void triangulofill(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0, unsigned char caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
  auto SWAP = [](int &x, int &y) { int t = x; x = y; y = t; };
  auto drawline = [&](int sx, int ex, int ny) { for (int i = sx; i <= ex; i++) pixel(i, ny, caracter, Fondo, Texto); };
  int t1x, t2x, y, minx, maxx, t1xp, t2xp;
  bool changed1 = false;
  bool changed2 = false;
  int signx1, signx2, dx1, dy1, dx2, dy2;
  int e1, e2;
  if (y1>y2) { SWAP(y1, y2); SWAP(x1, x2); }
  if (y1>y3) { SWAP(y1, y3); SWAP(x1, x3); }
  if (y2>y3) { SWAP(y2, y3); SWAP(x2, x3); }
  t1x = t2x = x1; y = y1;
  dx1 = (int)(x2 - x1); if (dx1<0) { dx1 = -dx1; signx1 = -1; }
  else signx1 = 1;
  dy1 = (int)(y2 - y1);
  dx2 = (int)(x3 - x1); if (dx2<0) { dx2 = -dx2; signx2 = -1; }
  else signx2 = 1;
  dy2 = (int)(y3 - y1);
  if (dy1 > dx1) {
    SWAP(dx1, dy1);
    changed1 = true;
  }
  if (dy2 > dx2) {
    SWAP(dy2, dx2);
    changed2 = true;
  }
  e2 = (int)(dx2 >> 1);
  if (y1 == y2) goto next;
  e1 = (int)(dx1 >> 1);
  for (int i = 0; i < dx1;) {
    t1xp = 0; t2xp = 0;
    if (t1x<t2x) { minx = t1x; maxx = t2x; }
    else { minx = t2x; maxx = t1x; }
    while (i<dx1) {
      i++;
      e1 += dy1;
      while (e1 >= dx1) {
        e1 -= dx1;
        if (changed1) t1xp = signx1;
        else          goto next1;
      }
      if (changed1) break;
      else t1x += signx1;
    }
    next1:
    while (1) {
      e2 += dy2;
      while (e2 >= dx2) {
        e2 -= dx2;
        if (changed2) t2xp = signx2;
        else          goto next2;
      }
      if (changed2)     break;
      else              t2x += signx2;
    }
    next2:
    if (minx>t1x) minx = t1x; if (minx>t2x) minx = t2x;
    if (maxx<t1x) maxx = t1x; if (maxx<t2x) maxx = t2x;
    drawline(minx, maxx, y);
    if (!changed1) t1x += signx1;
    t1x += t1xp;
    if (!changed2) t2x += signx2;
    t2x += t2xp;
    y += 1;
    if (y == y2) break;
  }
  next:
  dx1 = (int)(x3 - x2); if (dx1<0) { dx1 = -dx1; signx1 = -1; }
  else signx1 = 1;
  dy1 = (int)(y3 - y2);
  t1x = x2;
  if (dy1 > dx1) {
    SWAP(dy1, dx1);
    changed1 = true;
  }
  else changed1 = false;
  e1 = (int)(dx1 >> 1);
  for (int i = 0; i <= dx1; i++) {
    t1xp = 0; t2xp = 0;
    if (t1x<t2x) { minx = t1x; maxx = t2x; }
      else { minx = t2x; maxx = t1x; }
      while (i<dx1) {
        e1 += dy1;
        while (e1 >= dx1) {
          e1 -= dx1;
          if (changed1) { t1xp = signx1; break; }
          else          goto next3;
        }
        if (changed1) break;
        else          t1x += signx1;
        if (i<dx1) i++;
      }
    next3:
      while (t2x != x3) {
        e2 += dy2;
        while (e2 >= dx2) {
          e2 -= dx2;
          if (changed2) t2xp = signx2;
          else          goto next4;
        }
        if (changed2)     break;
        else              t2x += signx2;
      }
    next4:
    if (minx>t1x) minx = t1x; if (minx>t2x) minx = t2x;
    if (maxx<t1x) maxx = t1x; if (maxx<t2x) maxx = t2x;
    drawline(minx, maxx, y);
    if (!changed1) t1x += signx1;
    t1x += t1xp;
    if (!changed2) t2x += signx2;
    t2x += t2xp;
    y += 1;
    if (y>y3) return;
  }
}

void polytriangulo(int X1 = 0, int Y1 = 0, int X2 = 0, int Y2 = 0, int X3 = 0, int Y3 = 0, unsigned char caracter = 219, unsigned int Fondo = 0,  unsigned int Texto = 15){
  linea(X1, Y1, X2, Y2, caracter, Fondo, Texto);
  linea(X2, Y2, X3, Y3, caracter, Fondo, Texto);
  linea(X3, Y3, X1, Y1, caracter, Fondo, Texto);
}

typedef struct point{
  int x,y;
} point, points, punto, puntos, PUNTO, PUNTOS;


void poligonfill(int cantidad, point *p, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
    int inter[cantidad],x,y;
    int v,xmin,ymin,xmax,ymax;
    int c;
    int i=cantidad;
    v=cantidad;

    p[i].x=p[0].x;
    p[i].y=p[0].y;
    xmin=xmax=p[0].x;
    ymin=ymax=p[0].y;

    for(int i=0;i<v;i++){
      if(xmin>p[i].x)
        xmin=p[i].x;
      if(xmax<p[i].x)
        xmax=p[i].x;
      if(ymin>p[i].y)
        ymin=p[i].y;
      if(ymax<p[i].y)
        ymax=p[i].y;
    }

    float s=ymin+0.01;
    while(s<=ymax){
      int x1,x2,y1,y2,temp;
      c=0;
      for(int i=0;i<v;i++){
        x1=p[i].x;
        y1=p[i].y;
        x2=p[i+1].x;
        y2=p[i+1].y;
        if(y2<y1){
          temp=x1;
          x1=x2;
          x2=temp;
          temp=y1;
          y1=y2;
          y2=temp;
        }
        if(s<=y2&&s>=y1){
          if((y1-y2)==0)
            x=x1;
          else
          {
            x=((x2-x1)*(s-y1))/(y2-y1);
            x=x+x1;
          }
          if(x<=xmax && x>=xmin)
            inter[c++]=x;
        }
      }
      for(int i=0; i<c;i+=2){ lineax(inter[i],inter[i+1],s, Caracter, Fondo,Texto); }// sort(s);
        s++;
    }
}

void polytriangulofill(int X1 = 0, int Y1 = 0, int X2 = 0, int Y2 = 0, int X3 = 0, int Y3 = 0, unsigned char Caracter = 219, unsigned int Fondo = 0,  unsigned int Texto = 15){
  point PUNTOS_[3];
  PUNTOS_[0].x = X1;
  PUNTOS_[0].y = Y1;
  PUNTOS_[1].x = X2;
  PUNTOS_[1].y = Y2;
  PUNTOS_[2].x = X3;
  PUNTOS_[2].y = Y3;
  poligonfill(3, PUNTOS_, Caracter, Fondo, Texto);
}

// ##########################################################
// ##########################################################
// ##################### LEYENDO IMAGNES ####################
// ##########################################################
// ##########################################################

void readbmp(const std::string filename, std::vector<unsigned int> *v){
    FILE* f = fopen(filename.c_str(), "rb");
    if(f == NULL){ printf("ERROR CON EL ARCHIVO BMP : %s\n", filename.c_str()); exit(0); }
    unsigned char info[54];
    fread(info, sizeof(unsigned char), 54, f);
    int width = *(int*)&info[18];
    int height = *(int*)&info[22];
    v->push_back(width);
    v->push_back(height);
    int row_padded = (width*3 + 3) & (~3);
    unsigned char* data = new unsigned char[row_padded];
    unsigned char tmp;
    for(int i = 0; i < height; i++){
        fread(data, sizeof(unsigned char), row_padded, f);
        for(int j = 0; j < width*3; j += 3){
            tmp = data[j];
            data[j] = data[j+2];
            data[j+2] = tmp;
            v->push_back(RGB(
                (int)data[j + 0],
                (int)data[j + 1],
                (int)data[j + 2]));
        }
    }
    fclose(f);
}

int RGB16(COLORREF c){
    int index =  (GetRValue(c) > 128 | GetGValue(c) > 128 | GetBValue(c) > 128) ? 8 : 0;
        index |= (GetRValue(c) > 64) ? 4 : 0;
        index |= (GetGValue(c) > 64) ? 2 : 0;
        index |= (GetBValue(c) > 64) ? 1 : 0;
    return index;
}

char Brightness(COLORREF _1){
  int factor = GetRValue(_1) + GetGValue(_1) + GetBValue(_1);
  if (factor >= 602)return 176;
  if (factor >= 572)return '@';
  if (factor >= 532)return 219;
  if (factor >= 502)return '8';
  if (factor >= 472)return '0';
  if (factor >= 432)return '&';
  if (factor >= 402)return '%';
  if (factor >= 372)return '?';
  if (factor >= 332)return '<';
  if (factor >= 302)return '/';
  if (factor >= 252)return '*';
  if (factor >= 200)return '.';
  return 177;
}

bool drawbmp(std::vector<unsigned int> Datas, int x = 0, int y = 0){
    int Index = 0, Xpos, Ypos,
    ANCHO = Datas[0],
    ALTO = Datas[1];

    for (int i = 0; i < ALTO; i+=1)
    {
        for (int o = 0; o < ANCHO; o+=1)
        {
            Index = (i*ANCHO+o)+2;

            Xpos = o+x-(ANCHO/2);
            Ypos = (ALTO-i-1)+y-(ALTO/2);

            pixel(Xpos,Ypos, Brightness(Datas[Index]), 0,RGB16(Datas[Index]));
        }
    }

    return 1;
}

bool mostrarbmp(std::vector<unsigned int> Datas, int x = 0, int y = 0){
    int Index = 0, Xpos, Ypos,
    ANCHO = Datas[0],
    ALTO = Datas[1];

    for (int i = 0; i < ALTO; i+=1)
    {
        for (int o = 0; o < ANCHO; o+=1)
        {
            Index = (i*ANCHO+o)+2;

            Xpos = o+x-(ANCHO/2);
            Ypos = (ALTO-i-1)+y-(ALTO/2);

            pixel(Xpos,Ypos, Brightness(Datas[Index]), 0,RGB16(Datas[Index]));
        }
    }

    return 1;
}

// ###############################################################################
void databmp(int *ANCHO, int *ALTO, const std::string filename, std::vector<unsigned int> *DATBMP){
  FILE* f = fopen(filename.c_str(), "rb");
  if(f == NULL){ printf("ERROR DE IMAGEN...."); return; }
  unsigned char info[54];
  fread(info, sizeof(unsigned char), 54, f);
  int width = *(int*)&info[18];
  int height = *(int*)&info[22];
  *ANCHO = width;
  *ALTO = height;

  int row_padded = (width*3 + 3) & (~3);
  unsigned char* data = new unsigned char[row_padded];
  unsigned char tmp;

  std::vector<int> DataIMG;

  for(int i = 0; i < height; i++)
  {
    fread(data, sizeof(unsigned char), row_padded, f);
    for(int j = 0; j < width*3; j += 3)
    {
    // Convert (B, G, R) to (R, G, B)
      tmp = data[j];
      data[j] = data[j+2];
      data[j+2] = tmp;
      DataIMG.push_back( (int)data[j + 0] );
      DataIMG.push_back( (int)data[j + 1] );
      DataIMG.push_back( (int)data[j + 2] );
    }
  }
  // fflush(f);
  fclose(f);
  delete[] data;

  for (int i = DataIMG.size(); i >=0; i-=3)
  {
    DATBMP->push_back(DataIMG[i + 0]);
    DATBMP->push_back(DataIMG[i + 1]);
    DATBMP->push_back(DataIMG[i + 2]);
  }
  DataIMG.clear();
  DataIMG.shrink_to_fit();
}

void bmp(int posX, int posY, int ANCHO, int ALTO, std::vector<unsigned int> &DatosdIMG, int reduccionX = 0, int reduccionY = 0, int Radio_Z = 0, COLORREF TRANSPARENT_COLOURS = RGB(-1,-1,-1), const int MODE = 0, int VueltaX = 0, int VueltaY = 0){
  if(reduccionX<=0){reduccionX=1;}
  if(reduccionY<=0){reduccionY=1;}



  if(VueltaX>0){VueltaX=-1;} else {VueltaX=1;}
  if(VueltaY>0){VueltaY=-1;} else {VueltaY=1;}



  int X=0,Y=0;
  int R = 0,G = 0,B = 0;
  int A_X, A_Y;
  int xt,yt;
  for (int i = 0 ; i < ALTO; i+=reduccionY){
    for (int o = 0; o < ANCHO; o+=reduccionX)
    {
      R=(DatosdIMG[  3*(o+i*ANCHO) + 0 ]);
      G=(DatosdIMG[  3*(o+i*ANCHO) + 1 ]);
      B=(DatosdIMG[  3*(o+i*ANCHO) + 2 ]);

      A_X = X-(ANCHO/reduccionX/2);
      A_Y = Y-(ALTO/reduccionY/2);

      if (RGB(R,G,B)!=TRANSPARENT_COLOURS){
      double theta = Radio_Z * (PI / 180);
      xt = A_X * cos(theta)/VueltaX - A_Y * sin(theta)/VueltaY + posX;
      yt = A_X * sin(theta)/VueltaX + A_Y * cos(theta)/VueltaY + posY;
      //
      if (MODE>=0) lineax(xt, xt+2, yt, Brightness(RGB(R,G,B)), RGB16(RGB(R/2,G/2,B/2)), RGB16(RGB(R,G,B)) );
      if (MODE>=1) lineax(xt, xt+2, yt, Brightness(RGB(R/2,G/2,B/2)), RGB16(RGB(R/2,G/2,B/2)), RGB16(RGB(R,G,B)) );
      if (MODE>=2) lineax(xt, xt+2, yt, Brightness(RGB(R,G,B)), RGB16(RGB(R,G,B)), RGB16(RGB(R/2,G/2,B/2)) );
      if (MODE>=3) lineax(xt, xt+2, yt, Brightness(RGB(R,G,B)), RGB16(RGB(R,G,B)), RGB16(RGB(R/2,G/2,B/2)) );
      if (MODE>=4) lineax(xt, xt+2, yt, 219, RGB16(RGB(R/2,G/2,B/2)), RGB16(RGB(R,G,B)) );
      }

      X++;
    }
    X=0;
    Y++;
  }
  DatosdIMG.clear();
}

void imagen(int x, int y, std::string FileName, int Radio_Z, int RedAncho, int RedAlto, COLORREF RGB_Transparente){
  int ancho;
  int alto;
  std::vector<unsigned int> datasBMP;
  databmp(&ancho, &alto, FileName, &datasBMP);
  bmp( x,y, ancho,alto, datasBMP, RedAncho,RedAlto, Radio_Z, RGB_Transparente );
  datasBMP.clear();
  datasBMP.shrink_to_fit();
}
// ###############################################################################


// ##############################################################
// ##############################################################
// ######################## CONVERSIONES ########################
// ##############################################################
// ##############################################################

std::string flotante(float n){
  char s[MAXBYTE];
  sprintf(s,"%f",n);
  return s;
}

std::string entero(int n){
  char s[MAXBYTE];
  sprintf(s,"%i",n);
  return s;
}

std::string caracter(int n){
  char s[MAXBYTE];
  sprintf(s,"%c",n);
  return s;
}

int entero_s(std::string cadenas){ return atoi(cadenas.c_str()); }

int entero_s_1(std::string cadenas){
  int salida;
  sscanf(cadenas.c_str(),"%i", salida);
  return salida;
}

int hexa_s(std::string cadenas){ return stoi(cadenas, nullptr, 16); }

// #########################################################
// #########################################################
// ##################### OTRAS FUNCIONES ###################
// #########################################################
// #########################################################

#define ctrlen(array) ( sizeof(array) / sizeof( (array)[0] ) )

#define random(minimo,maximo) ( minimo + rand() / (RAND_MAX / (maximo - minimo + 1 ) + 1))

int vX(){return W_RENDER_DEQ2000;}

int vY(){return H_RENDER_DEQ2000;}

int vx(){return W_RENDER_DEQ2000;}

int vy(){return H_RENDER_DEQ2000;}

void coordxy(int x, int y, unsigned int caracterX, unsigned int caracterY, unsigned int Fondo, unsigned int Texto){
  lineay(0, vy(), x, caracterY, Fondo, Texto);
  lineax(0, vx(), y, caracterX, Fondo, Texto);
}

#define espera(espera) (Sleep(espera))

void titulo(const std::string TITULO){
  SetConsoleTitle((LPCSTR)TITULO.c_str());
}

bool coliciones(int Ax = 0, int Ay = 0, int Aw = 0, int Ah = 0, int Bx = 0, int By = 0, int Bw = 0, int Bh = 0, bool MostrarRectangulo = false){
  bool Colisionan = false;
  if(MostrarRectangulo==true){
    rectangulo(Ax, Ay, Ax+Aw-1, Ay+Ah-1, 219, 0,12);
    rectangulo(Bx, By, Bx+Bw-1, By+Bh-1, 219, 0,12);
  }
  if(Ax+Aw>Bx && Ax<Bx+Bw && Ay+Ah>By && Ay<By+Bh){ Colisionan = true; }
  return Colisionan;
}

void sonido(LPCSTR SONIDO){
  PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
  // PlaySound(TEXT(SONIDO), NULL,  SND_ASYNC);
}

#define sound(SONIDO) (PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_LOOP | SND_ASYNC))

float angulo(float X, float Y){ return (float)atan2(Y, X); }

float angle(float X, float Y){ return (float)atan2(Y, X); }

float anguloxy(float posX, float posY, float mouseX, float mouseY){ return (float)atan2(mouseY-posY, mouseX-posX); }

float anglexy(float posX, float posY, float mouseX, float mouseY){ return (float)atan2(mouseY-posY, mouseX-posX); }

void rota(float& x, float& y, float cx, float cy, float da) {
  float dx = x - cx, dy = y - cy;
  float r = sqrt(dx*dx + dy*dy);
  float a = atan2(dy, dx);
  a += da / 180 * M_PI; // se resta porque las y's estan giradas
  x = r * cos(a) + cx;
  y = r * sin(a) + cy;
}

// ##########################################################
// ##########################################################
// ################## MEDICION DE TIMEPO ####################
// ##########################################################
// ##########################################################

clock_t Tiempo_LLevado_Del_Render;

void iniciartiempo(){ Tiempo_LLevado_Del_Render = clock(); }

void finaltiempo(){ Tiempo_LLevado_Del_Render = clock()-Tiempo_LLevado_Del_Render; }

float mostrartiempo(){ return (float)Tiempo_LLevado_Del_Render/CLOCKS_PER_SEC; }

auto timedcall = [](std::string name, auto&& func, int ModoMostrar = 0) {
    GameTimer_t timer;
    func();
    if (ModoMostrar==1) texto(0,vY()-2, name+" - "+entero(timer.ellapsed()/1000)+" MS", 0,12);
    if (ModoMostrar==0) printf("%s - %i - MS\n",name.c_str(),  timer.ellapsed()/1000);
    RENDER_FPS = timer.ellapsed()/1000;
    return RENDER_FPS;
};

auto llamartiempo = [](std::string name, auto&& func, int ModoMostrar = 0) {
    GameTimer_t timer;
    func();
    if (ModoMostrar==1) texto(0,vY()-2, name+" - "+entero(timer.ellapsed()/1000)+" MS", 0,12);
    if (ModoMostrar==0) printf("%s - %i - MS\n",name.c_str(),  timer.ellapsed()/1000);
    RENDER_FPS = timer.ellapsed()/1000;
    return RENDER_FPS;
};

// ##################################################################
// ##################################################################
// ####################### CREACION DE BITS #########################
// ##################################################################
// ##################################################################

void crearimagen(const std::string path, const int width, const int height, const std::vector<int> data) {
    const int pad=(4-(3*width)%4)%4, filesize=54+(3*width+pad)*height; // horizontal line must be a multiple of 4 bytes long, header is 54 bytes
    char header[54] = { 'B','M', 0,0,0,0, 0,0,0,0, 54,0,0,0, 40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0,24,0 };
    char padding[3] = { 0,0,0 };
    for(int i=0; i<4; i++) {
        header[ 2+i] = (unsigned char)((filesize>>(8*i))&255);
        header[18+i] = (unsigned char)((width   >>(8*i))&255);
        header[22+i] = (unsigned char)((height  >>(8*i))&255);
    }
    unsigned char* img = new unsigned char[3*width*height];
    for(int i=0; i<width*height; i++) {
        const int color = data[i];
        img[3*i+2] = (unsigned char)( color     &255);
        img[3*i+1] = (unsigned char)((color>> 8)&255);
        img[3*i+0] = (unsigned char)((color>>16)&255);
    }
    std::ofstream file(path, std::ios::out|std::ios::binary);
    file.write(header, 54);
    for(int i=height-1; i>=0; i--) {
        file.write((char*)(img+3*width*i), 3*width);
        file.write(padding, pad);
    }
    file.close();
    delete[] img;
}

#endif // __dartxt_h__



// @@@@@@@@@@@@@@@█0&?%???%%?%%??%%%???<?<<//*******<****\<<\%%<<██████888888<<<<<<<//<</<<</<//.**........*.▒▒.▒▒▒▒▒▒▒▒▒
// @@@@@@@@@@@@@@█0%&%??<<??%%%?%%&%%?<<<//****.*****///**/<<<%%?%8█8█88█8█88880?<<<<<//<<<<<<<<</**.....▒..**▒▒▒▒.▒▒▒▒▒▒▒▒
// @@@@@@@@@@@@@█0??%?<???%??????%&%??<<//*******..****//**/<?????0███████8█8880<<<<<<<<<<<?<*/</*/*.......▒.▒.▒▒▒.▒▒▒▒▒▒▒▒
// @@@@@@@@@@@@█0???<<?%%%%????%%%???<<<<<<//*.***.*****////<?<<<?088███8█8█888&<<<<<<<<<<<<<<<</***.........▒▒▒▒▒▒▒▒▒▒▒..▒
// @@@@@@@@@@@@0???<??%%%%??%??%%%%%?%???%&%%*******.****/*/<<??<?0█████████8800?<??</<<<??<</<<<*/*.....**.▒▒▒▒▒▒▒▒▒▒▒▒..▒
// @@@@@@@@@@@█??<??&%%%%%%%%%%&&000&&08█8800<<******<<<<<?%0██████████800<<<<<<<???<<<<<</**....**.▒..▒▒▒▒▒▒▒▒▒▒▒▒
// @@@@@@@@@██%%%???%%?%%%%%%%&&&88088880&&%%&%/<<******<<<<<%0██████████88&<?<<<<<???<<<<?<<******.....▒▒.▒▒▒▒▒▒▒▒.▒▒▒
// @@@@@@@@@@0???%?<?%&%%%%&&&0080000000&&%??<<//<//***/*/<<<??&0█████████808&<<??<<<<??<<</<<<*/*......▒▒.▒▒▒▒.▒.▒▒..▒▒▒
// @@@@@@@@@█%%%%??%&%%%&&?%&80&&0888880&&&%%<<****/***////<<<<???&8████8███880%<<??<<<????<<<<</*/*........▒.▒▒▒▒▒▒▒▒▒.▒▒▒
// @@@@@@@@@8%&%??%%?%%&&&0&&&&&&00800&&%%?<//?/***/**/<**//<//<<<?&8███8███880%<?<<<<<<???</<<</**........▒▒▒▒..▒▒▒▒▒▒▒..▒
// @@@@@@@@@0&&???%&%%%%&&%%%&%%%%%???<?<<<<<<//////<<////////<<<<<?08██████880%??<<<<???<<<<<<<***......▒▒▒▒.▒.▒▒▒▒▒▒....▒
// @@@@@@@@@0%?%%%&%??????%%%%%??%????<<?</<<<<//</??<<<//////*//??<?&8████8880???<<<<<??<<</<<<***......▒▒.....▒▒.▒▒▒....▒
// @@@@@@@@█%??%%??<<<<<<<<??<<<<???%%??<<<???<<<<%%&&%<<///*/*//<????%8████080?<?<<<<?????<<<</***.....*.▒.▒...▒▒▒▒▒▒.▒...
// @@@@@@@8%%%<<<<<<<<<<????<</<<<<<<<%?%%&&&??<?%&&080?<<///***<</<<?%0███8080<<<<<<??<???<<<<<**..*...*........▒▒▒▒.....▒
// @@@@@@█%%?<<<///<<<??<<<<<//<<<<<??%%%&&&&%%%&088█880%?<</****/<<??0███888&?<<??<<??<???<<?/*******..........▒▒▒▒.▒....▒
// @@@@@@0??<<<<///</<//**/</<<<<??%&&&&&&000&&%0888███80%?</*//*/*/<%08███88%??<??<<?????<<<</*******........▒▒▒▒▒▒...▒▒▒▒
// @@@@@█????<</</<//******/</<<??%%&0008880000008██████880&?<******/&088█880%???<<<<???<<<<<<******.....▒...▒..▒▒▒▒.....▒.
// @@@@@&?<<<<<<<<//****//</<??%%&00888█88███80888████████880?//.****<&88█00&??<<??<<?<%%?<<<<***.****...▒.....▒▒▒▒▒▒▒.▒▒.▒
// @@@@█%?<<<<<<<*****\/<<<<<?%&&&88888█8████████████@██████8&<<****\/?88█80&<?<????<????<<<<<*\..*****........▒▒▒▒▒▒▒...▒.
// @@@@0%<??<<<</****//<<<<??&&&888808██████████████████████80%%***.*\<08880&<%?<<<??????<<<<<//*..*..*...▒▒....▒▒▒▒▒....▒▒
// @@@@%?<?<<///*****/<<??%?%&008888████@@@█████████████████88&&***.**<08880%?<??????%%??<<?<<//..****......▒▒▒▒▒▒▒▒.....▒.
// @@@@%<<<<////****/<?%%%%%&&00008█@@@@@@@@@@███████████████8&&/**.**<?8888%????????%??<<<<<//*.***...........▒.▒.▒.......
// @@██???</<<****<<?%%%&&&&08███@@@@@@@@@@@@@@@███████████8&&<**.**<%8088%???%??%%?%??<<?<//*****//*.......▒▒▒▒▒........
// @@88??<//</****/??%&&%&08██████@@@@@@@░░@█@@@@@████████8800<*****<&8800%<?<<???%??%?<<??*****..*.....▒.▒▒▒▒..▒▒.**..
// @@00<?<///****<<<?%00088███@@@@@░@@░░░@@@@@@@@█@█@██████800</***/<&██8&?<<<?<<??????<<<<**..*..**........▒▒▒..........
// @@00?<<</**...**/<?&0008███@█@@@░@@░░░░░░░@@@@@██@█████8█8000<<****<0█80%?<?<<<<????%?<<<<<..*.**.....................
// @█&&?<<<***.**?&%%<<<0████@@@@@@@@░░░░░░░@@@@@@@██████88000<***?0888&?<<<<<<%%????<?</<******......ç.▒..▒...*.*....
// @█&&<<**..***?&<//////<//??8░░█████@░░██@@@@@@█@████8880000?//*<8█80%<<<<<<<?????<<<<//******.....▒.......<*****..
// @█%%<</******.?%/////*//<<<<?%888008█888@██████@█8000880000?//**/%8█8&%<<<<<???%%<?<<<<//***/**........▒▒▒▒./<??/*....
// @█%%</********%//*//******/**\//<&88██@████8█░&%???<<<<<<%&&&</***/%8█8&?<<??<??%????<<<</<******...*....▒▒.../???<****/
// @█%%<********?<//***/********//</<88█░░█8800%?<<<<</<//////<<%/***/&888%<<<<?<<<%?%??????//.**...........▒▒.▒.<???<?<</<
// █&&?<///*****%/**/*/*****/*///*//<%08@█8██8?</<///////****/**%////<0██0%<<<<<???%????<<<<</.*...▒▒▒.*...▒▒▒..*<<<<<?<<<<
// █00/**//**<8<*//*//***********/*\<80000000&<//*/************<%<**/?8█8&%<<<<<<??????<?<<<//*.....▒▒.*..▒▒▒▒..<?<<??<<<</
// ███<////<//%/*/*************/*/*/<0%00&&&<///*/***********///?/*%&██8?????<<<???%%??<?<<</**.......*..▒▒▒▒▒▒./<<<<<<<<<<
// @██<//<<</*</*///************//*/%%0██8%%<///******.******//*<?<%8██0?<<?<<<<??%%??/?<<//**...*▒...▒.▒▒.▒▒..<<??<<<<<?<<
// @██<///<<//</*////**************/&%8@█8&&</*********.*******/*?<&██880?<<<<<<??%%??<?<<*/*...**...........▒./<<<<<<<<<<<
// @██</<?/</<<<///**/*************/&%█@@█&&?/*/******.***.******<&8█0000????<<?%%%???<??<**.....*......▒..▒▒../<<<?<<<<<<<
// @██%<??<<</<?////***************%&0@░@█00</*****.*..*...******<%8██0%%<<<<<<?????%<<???/**..*......*▒..▒▒▒▒*/<<<<<<<<<<<
// @@@&??%<<<<<<//*********.*****//%?8@░@@88%/*****........******/&80█0??<<<<</<??????<<?/**..*.........▒..▒.▒.**/<?<<<<<<<
// @@@0????%?</?//*/********.****/%<&█@░@@██%<****...*...********/&███8?<<<<<<<<????%<<?<**.*..........▒..▒▒▒▒...../<<<??<<
// @██80???%?<<?<//**************<?%█@@░░@██?%******.***.*********%8██0&?<<<</<<?????<<<?*.**...*...**..▒▒▒.▒▒.....*<?<<<<<
// @@@█8%??%?<<%&//**//*********/%?0█@@░░@██?%/***..**.*.********/%0██0&&<<<<<<?????<<<<<***.............▒▒..▒▒▒..*.*//<<<<
// @@@██8%?%?<?%%%***********<?<%8█@@░░@██&?%//**.**.*.********<?8██&&&?<<<<<??????<<<<****...*.......▒.▒.▒▒▒.▒.....***<<
// @@@@██&%%???%%&8////******???&██@@░@@@@0??<****.*.*.********??0█80?<<<<<<<<?%%?<<<</.*...............▒.▒.▒▒.........<<
// @@@@@██&%<%%&%&&%/**//***/????%0█@@@░░@@@8%<<<*.******.****\/<??0█8&&<<<<<<<?<????<<</.**..**........▒▒▒...▒▒▒.▒▒...../<
// @@@@@██0&%&%&%&&&&%???//%%%??%&8█@@░░░@@@█0%<<//**.**********?&?8█0&?<<<<</<<<??<<<<<**.**.....*....▒..▒..▒▒▒..▒..▒▒▒▒**
// @@@@@@@00?%&%&&&&&&%&&&<?%%?%%8███@@@@@███0%<??<***.***/*//???%&██0&?<<</<<<?????/<<</*.................▒▒▒..▒.▒..▒.▒▒..
// @@@@@@█&&&&&%&%&&&&&&&%%%%%&%&88█8██@@██888&??<<</***.*//*░88?%&██0&?<<///<<<?//</<??/**.............▒..▒▒▒▒.▒..▒.▒▒▒▒..
// @@@@@@█0&0&&&%%%%&&&&&&&%&&&00880088888800█8&%<<??<<***<%&%%%<?0█80&?<<<<//<<<<<</<<<**.***....*...▒▒..▒▒▒..▒▒▒▒▒▒.▒▒▒▒▒
// @@@@@@@80&0&&&%&&&&&&&&&&&00800&?<%000&&??00&?%%??????<???%%%<%8██0&%//</*<<<?<<<<<<<*******........▒...▒▒.▒..▒▒▒▒▒▒▒▒▒▒
// @@@@@@@8000&&&%&&%&&&&&&008██0&%?<?%&&%?<<0&&%%%%%??%??%%%?%%?&8██0%?</<**<<<<<<<<<<</******.*......▒.▒▒▒▒..▒▒▒▒▒▒▒.▒▒▒▒
// @@@@@@88800&%&%&&&&&&+08████8&&&%&&&%%&%%<%&&0&%%?%?%??%?%%%%%8██80&?<////<<??<</<<<//****..........▒▒.▒.▒▒.▒..▒▒▒.▒▒▒▒.
// @@@@@@████8&%%&&%&&&0088████80%&&&&&&%&&&?%088&&%%%%???%??%%&███0&&<<<</*<??<<<<//<<//****..................▒..▒▒▒.▒..▒▒
// ███@@@@████&?%&%%&&000███████8&&&0&%%&&&&%&08880%?%%??%?????&888000</<<*<<?<<<<<<<///*.**.........▒.▒..▒▒▒▒▒▒....▒▒▒▒.▒▒
// @@@@@█@█880&0&%&&&00008███████8888&&%&000&&88█880%%%?%?%??%%88█80&%</<///<??/<<*//....\............▒...▒▒▒▒.▒▒▒..▒▒▒▒▒▒▒
// @@@███@@█@█@█&&&&&&00008██████88888&08█8888888888&%%%???????08808&&<<//</<<<<<<///<*****....*......▒.▒▒▒▒..▒.....▒▒▒▒▒▒▒
// @@@@@█@@@@@@@█&&&&&00088█88888█████8█████88888880&%%??%%<???888&88&//////////<<//</***..***.....**....▒▒.▒▒▒▒....▒▒▒▒▒.▒
// ███@@@@@@██@@█&&&&&0008880088██8008███80088808088&&%???<<<??█88088%*/****<<<////*/*******..*.......▒...▒▒▒▒.▒▒..▒.▒▒▒▒▒▒
// ███@██████@@██0&&&&&00000&&&00&%%&&00&&&&8█000000&&&?%???///8&?080?//**********///**...**.*.........▒▒.▒▒▒▒..▒..▒▒▒..▒▒▒
// ████@█████████8&&&&&0000&%?%%?<%%?%%&%???&00&&&0&&&%????<***%//%&&//**////******/***.****.............▒▒▒▒▒▒▒....▒▒▒▒▒▒▒
// █████@█████████%%%&&&&&&&%???%??????<??<<<?%%?%&&&%%%?<?/.....*?&&<********************.**..*....▒▒▒▒..▒▒▒▒▒▒.▒▒▒▒▒▒.▒
// ███████████████0%%%&&&&&&&&&&&&0&&0&&&&&&<<<<<?%&%&%???<*.....0&<*****************.........▒..▒▒....▒▒.▒▒▒▒▒▒▒..▒▒▒.▒▒
// ███████████████0???%&&&&&&0&&00&&0&&0&&&&&?<<<<%?%?%?<<<......**<<<***********.****▒.........▒▒▒.......▒.▒▒▒▒.▒.▒▒▒▒▒▒
// ██████████████%*<??%%%&&&&&00%%&&&&&&&&&&&&%%%<????%?<<*......**<</*****/*********.......▒..▒▒▒▒.....▒▒▒▒.▒▒▒▒▒▒.▒▒▒▒▒
// ████████8█80&**?<?%%%&0&&0&0&&%%???????%?%&%%%?%?<<//*......**<?*******......**....▒........▒▒▒▒.▒▒.▒.▒.▒▒▒...▒▒▒▒▒▒▒▒
// &%%0&%?<//</****<?%%&&0000&&8&&%?????%%?%%&%&&%??<</*........*<<.........**....**...▒▒▒.▒▒▒▒▒▒▒▒...▒.......▒▒▒.▒▒▒▒▒▒▒
// <??<<<<<///***/***????&&&0000000&&&%%%?%%%&%&%&?<<?<<*.........*</****.........*.****........▒....▒.▒▒▒.▒..▒▒▒.▒▒▒▒▒▒▒.▒
// <%%</*////****.**/????&&000808888880800&&&&&&%??</<<**.........*?*.*.***.**................▒..▒▒.▒▒▒▒▒▒....▒▒▒.▒.▒▒▒▒▒
///</*****.***.**.<<<<&&0080088████8█8800&&%%%??</</***.........*****..*.*...**.............▒.....*.▒▒▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒▒▒
///*//***.....*.*<??%&0888888████888888&&%%???<//***....▒▒..*.***...**....*..........▒.......▒▒▒▒..▒▒▒▒▒▒▒....▒▒▒▒▒▒▒▒
//******...*....*/?????&888888888000000080&&&%%<</***............*...**....**...........▒▒.▒▒.▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒
// *****..*....***.*.???<?%088880080000&00000&&&?<***...................*.*.*..........▒....▒▒▒▒▒▒▒.▒.▒▒▒▒▒▒▒▒▒▒▒...▒▒▒▒▒
// ***.*.*....*.*....<??<<<&0&&0000&&&&&&&&&&&&&?***...................**.*..................▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// ***..**...**....../<<<<<<%%%%%%%%%%%&%%%&&&%?</*.**...................**..*.......*.........▒..▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// **..*****.........*<<<<<<<<<???<?<?%<<<<%%??/******...............*...*.......*.*.......▒...▒▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// ..*..*............*<<?<<<</</<//<<</<<**<<</******.▒..........*..*..............**........▒...▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// ****.**.**.........???<<<<</</****\<</**\*******...........*****<<........▒▒▒▒..***.*.*...▒.▒▒▒▒▒▒▒▒▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒▒▒▒▒
// ..********.........<<<</<<</////*****************..........//<</</.......▒▒▒▒▒▒▒***.*........▒▒▒▒▒▒.▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ç
// ***.**...***.......//<<<<<<//*\*****************...........***......▒.▒.▒▒▒▒▒..//**..*......▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
// ****.*..*..........**</<<<<</*//***************.......▒.....*...*......▒...▒...▒▒<0%?<***.....▒▒▒▒▒..▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
















