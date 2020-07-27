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
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <vector>
#include <math.h>
#include <chrono>
#include <fstream>

#pragma comment(lib, "winmm.lib")

#define PI acos(-1)

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

struct ESTADOS_MOUSE{
	bool bPressed;
	bool bReleased;
	bool bHeld;
} m_mouse[5];

struct MOTOR2D
{
public:
	HANDLE wHnd;
	HANDLE rHnd;

	SMALL_RECT windowSize;
	COORD characterBufferSize;
	COORD characterPosition = {0, 0};
	SMALL_RECT consoleWriteArea;
	CHAR_INFO *consoleBuffer;
	bool RENDER_INICIADO = false;
	bool SALIR_CERRO_PRIMERO = false;

	int MOTOR2D_W;
	int MOTOR2D_H;

	int LINEATOX = 0;
	int LINEATOY = 0;
	int LINEATO = 0;

	MOTOR2D(){}

	~MOTOR2D(){
		if(!SALIR_CERRO_PRIMERO){
			printf("\t\tSeccion cerrada! por structura");
			free(consoleBuffer);
			CloseHandle(wHnd);
			CloseHandle(rHnd);
		}
	}

	void SETDIM(unsigned int W, unsigned int H){
		char A[100];
	    sprintf(A, "@mode %d,%d", W, H);
	    system(A);
	}

	void FUENTE(unsigned int W, unsigned int H, bool FONT){
		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
	    cfi.dwFontSize.X = W;
	    cfi.dwFontSize.Y = H;
	    cfi.FontFamily = FF_DONTCARE;
	    cfi.FontWeight = FW_NORMAL;

	    if(FONT==0){
	    	wcscpy_s(cfi.FaceName, L"Lucida");
	    } else {
	    	wcscpy_s(cfi.FaceName, L"Consolas");
	    }
	    if (!SetCurrentConsoleFontEx(wHnd, false, &cfi)){
	    	printf("ERROR DE FUENTES....\n");
	    	getch();
	    }
	}

	void MOTOR2DPINTAR(float esperar = 0){
		if (RENDER_INICIADO){
			if(!SetConsoleMode(rHnd, ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT))
				return;
			Mouse_Inputs();
			Sleep(esperar);
			WriteConsoleOutputA(wHnd, consoleBuffer, characterBufferSize, characterPosition, &consoleWriteArea);
		} else {
			printf("\rERROR NO INICIO PRIMERO LA FUNCION: iniciar(int W, int H, std::string TITULO = \"\", int FONT = 0,  int fontw = 8, int fonth = 8, bool Verificacion = 1);");
			free(consoleBuffer);
		}
	}

	void MOTOR2DSALIR(){
		SALIR_CERRO_PRIMERO = true;
		printf("\t\tSeccion cerrada! por funcion");
		free(consoleBuffer);
		CloseHandle(wHnd);
		CloseHandle(rHnd);
	}
	// ###########################################
	bool MOTOR2DINICIADO(int x, int y, int W, int H, std::string TITULO, int FONT,  int fontw, int fonth, bool Verificacion){
		free(consoleBuffer);
		RENDER_INICIADO = true;
		if (RENDER_INICIADO)
		{
			characterPosition = {(short)x, (short)y};
			wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
			rHnd = GetStdHandle(STD_INPUT_HANDLE);
		}
		SETDIM(W,H);
		MOTOR2D_W = W;
		MOTOR2D_H = H;
		consoleBuffer = new CHAR_INFO[W * H];
	    memset(consoleBuffer, 0, sizeof(CHAR_INFO) * W * H);
		CONSOLE_CURSOR_INFO info; // ocultamos el cursor.
		info.dwSize = 100;
		info.bVisible = FALSE;
		SetConsoleCursorInfo(wHnd, &info);
		SetConsoleTitle((LPCSTR)TITULO.c_str());
		windowSize = {(short)x, (short)y, (short)(W-1), (short)(H-1)};
		characterBufferSize = {(short)W, (short)H};
	    consoleWriteArea = {(short)x, (short)y, (short int)(W-1), (short int)(H-1)};
		if (!SetConsoleActiveScreenBuffer(wHnd)){ MOTOR2DSALIR(); }
		FUENTE(fontw,fonth, FONT);
	    return RENDER_INICIADO;
	}

	bool m_mouseOldState[5] = { 0 };
	bool m_mouseNewState[5] = { 0 };
	bool m_bConsoleInFocus = true;

	int m_mousePosX;
	int m_mousePosY;

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

} NEW_MOTOR2D;

// MOTOR2D NEW_MOTOR2D;



// INICIO DEL MOTOR.
int iniciar(int W, int H, std::string TITULO = "", int FONT = 0,  int fontw = 8, int fonth = 8, bool Verificacion = 1){
	return NEW_MOTOR2D.MOTOR2DINICIADO(0,0,W,H, TITULO, FONT, fontw, fonth, Verificacion);
}

int iniciar(int x, int y, int W, int H, std::string TITULO = "", int FONT = 0,  int fontw = 8, int fonth = 8, bool Verificacion = 1){
	return NEW_MOTOR2D.MOTOR2DINICIADO(x,y, W,H, TITULO, FONT, fontw, fonth, Verificacion);
}

int iniciar(int x, int y, int W, int H, int A, int B, std::string TITULO = "", int FONT = 0,  int fontw = 8, int fonth = 8, bool Verificacion = 1){
	NEW_MOTOR2D.MOTOR2DINICIADO(x,y, W,H, TITULO, FONT, fontw, fonth, Verificacion);
	NEW_MOTOR2D.SETDIM(A,B);
	return EXIT_SUCCESS;
}
// INICIO DEL MOTOR.




void pintar(float ESPERA = 0){
	NEW_MOTOR2D.MOTOR2DPINTAR(ESPERA);
}

void salir(){
	NEW_MOTOR2D.MOTOR2DSALIR();
}

void espera(short int time){ Sleep(time); }

// ##############################################################
// ###################################################
// ###################################################
// ################ FUNCIONES DEL MOUSE# #############
// ###################################################
// ###################################################

int getmousex() { return NEW_MOTOR2D.m_mousePosX; }
int getmousey() { return NEW_MOTOR2D.m_mousePosY; }

int getmouseX() { return NEW_MOTOR2D.m_mousePosX; }
int getmouseY() { return NEW_MOTOR2D.m_mousePosY; }

ESTADOS_MOUSE getmouse(int nMouseButtonID) { return m_mouse[nMouseButtonID]; }
ESTADOS_MOUSE mouse(int nMouseButtonID) { return m_mouse[nMouseButtonID]; }

bool isfocused() { return NEW_MOTOR2D.m_bConsoleInFocus; }
bool enfocado() { return NEW_MOTOR2D.m_bConsoleInFocus; }


int mousex(){ return NEW_MOTOR2D.m_mousePosX;}
int mousey(){ return NEW_MOTOR2D.m_mousePosY;}

int mouseX(){ return NEW_MOTOR2D.m_mousePosX;}
int mouseY(){ return NEW_MOTOR2D.m_mousePosY;}

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

bool izquierda(int nMouseButtonID = 0){
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

bool derecha(int nMouseButtonID = 0){
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

bool enfoco() { return NEW_MOTOR2D.m_bConsoleInFocus; }





// ####################################################
// ####################################################
// ############# FUNCIONES DE GRAFICOS ################
// ####################################################
// ####################################################

void fondo(unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
	for (int i = 0; i < NEW_MOTOR2D.MOTOR2D_W*NEW_MOTOR2D.MOTOR2D_H; ++i)
	{
		NEW_MOTOR2D.consoleBuffer[i].Char.AsciiChar = (unsigned char)Caracter;
		NEW_MOTOR2D.consoleBuffer[i].Attributes = (WORD) ( (Fondo << 4) | Texto);
	}
}

void borrar(){
	for (int i = 0; i < NEW_MOTOR2D.MOTOR2D_W*NEW_MOTOR2D.MOTOR2D_H; ++i)
	{
		NEW_MOTOR2D.consoleBuffer[i].Char.AsciiChar = (unsigned char)219;
		NEW_MOTOR2D.consoleBuffer[i].Attributes = 0;
	}
}

void clear(){
	for (int i = 0; i < NEW_MOTOR2D.MOTOR2D_W*NEW_MOTOR2D.MOTOR2D_H; ++i)
	{
		NEW_MOTOR2D.consoleBuffer[i].Char.AsciiChar = (unsigned char)219;
		NEW_MOTOR2D.consoleBuffer[i].Attributes = 0;
	}
}

void gotoxy(int x, int y, unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
	if(x>=0 && y>=0 && NEW_MOTOR2D.MOTOR2D_W>x && NEW_MOTOR2D.MOTOR2D_H>y){
		NEW_MOTOR2D.consoleBuffer[x + NEW_MOTOR2D.MOTOR2D_W * y].Char.AsciiChar = (char)Caracter;
		NEW_MOTOR2D.consoleBuffer[x + NEW_MOTOR2D.MOTOR2D_W * y].Attributes = DWORD((Fondo << 4 | Texto));
	}
}

void pixel(int x, int y, unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
	if(x>=0 && y>=0 && NEW_MOTOR2D.MOTOR2D_W>x && NEW_MOTOR2D.MOTOR2D_H>y){
		NEW_MOTOR2D.consoleBuffer[x + NEW_MOTOR2D.MOTOR2D_W * y].Char.AsciiChar = (char)Caracter;
		NEW_MOTOR2D.consoleBuffer[x + NEW_MOTOR2D.MOTOR2D_W * y].Attributes = DWORD((Fondo << 4 | Texto));
	}
}

int getpixelchar(int x, int y){
	if(x>=0 && y>=0 && NEW_MOTOR2D.MOTOR2D_W>x && NEW_MOTOR2D.MOTOR2D_H>y){
		return (int)NEW_MOTOR2D.consoleBuffer[x + y * NEW_MOTOR2D.MOTOR2D_W].Char.AsciiChar;
	}
	return 0;
}

int getpixelcolor(int x, int y){
	if(x>=0 && y>=0 && NEW_MOTOR2D.MOTOR2D_W>x && NEW_MOTOR2D.MOTOR2D_H>y){
		return (int)NEW_MOTOR2D.consoleBuffer[x + y * NEW_MOTOR2D.MOTOR2D_W].Attributes;
	}
	return 0;
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
			if (x+avanza>=0 && y>=0 && x+avanza<=(NEW_MOTOR2D.MOTOR2D_W-1) && y<=(NEW_MOTOR2D.MOTOR2D_H-1)){
				NEW_MOTOR2D.consoleBuffer[x+avanza + NEW_MOTOR2D.MOTOR2D_W * y].Char.AsciiChar = (unsigned char)caracter;
				NEW_MOTOR2D.consoleBuffer[x+avanza + NEW_MOTOR2D.MOTOR2D_W * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
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
				if (x+avanza>=0 && y>=0 && x+avanza<=(NEW_MOTOR2D.MOTOR2D_W-1) && y<=(NEW_MOTOR2D.MOTOR2D_H-1)){
					NEW_MOTOR2D.consoleBuffer[x+avanza + NEW_MOTOR2D.MOTOR2D_W * y].Char.AsciiChar = (unsigned char)caracter;
					NEW_MOTOR2D.consoleBuffer[x+avanza + NEW_MOTOR2D.MOTOR2D_W * y].Attributes = (WORD) ( (Fondo << 4) | Texto);
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

unsigned int dimencionessprites(int &W, int &H, std::string namefile){
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
	return (unsigned int)(W*H);
}

void spritedeq(int X, int Y, std::string Name, int Centro){
	char c;
	int X_, Y_;
	int i=0, o=0;
	int lin=0, col=0;
	unsigned int color=0;
	if(Centro){ dimencionessprites(lin,col,Name.c_str()); }
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
		pixel(x0,y0, Caracter, Fondo, Texto);
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
	rectangulo(x,y,w,h, Caracter, Fondo, Texto);
}

void moveto(int x, int y){
	NEW_MOTOR2D.LINEATOX = x;
	NEW_MOTOR2D.LINEATOY = y;
}

void lineato(int x = 0, int y = 0, unsigned char Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
	if(NEW_MOTOR2D.LINEATO==0){
		NEW_MOTOR2D.LINEATOX = x;
		NEW_MOTOR2D.LINEATOY = y;
		NEW_MOTOR2D.LINEATO = 1;
	}
	linea(NEW_MOTOR2D.LINEATOX,NEW_MOTOR2D.LINEATOY,x,y, Caracter, Fondo, Texto);
	NEW_MOTOR2D.LINEATOX = x;
	NEW_MOTOR2D.LINEATOY = y;
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
	pixel(xc, yc+ry, caracter, Fondo, Texto);
	pixel(xc, yc-ry, caracter, Fondo, Texto);
	rx2=pow(rx,2);
	ry2=pow(ry,2);
	p1=ry2-(rx2*ry)+(0.25*rx2);
	while((ry2*x)<(rx2*y))
	{
		if(p1<0)
			{ x++;
				p1=p1+(2*ry2*x)+ry2;
			} else {
				x++; y--;
				p1=p1+(2*ry2*x)-(2*rx2*y)+ry2;
			}
			pixel(xc+x,yc+y, caracter, Fondo, Texto);
			pixel(xc-x,yc+y, caracter, Fondo, Texto);
			pixel(xc+x,yc-y, caracter, Fondo, Texto);
			pixel(xc-x,yc-y, caracter, Fondo, Texto);
		}
		p2=(ry2)*pow((x+0.5),2)+(rx2)*pow((y-1),2)-(rx2*ry2);
		while(y>0)
		{
			if (p2>0)
			{
				y--;
				p2=p2-(2*rx2*y) +rx2;
			} else {
				x++; y--;
				p2=p2+ (2*ry2*x)-(2*rx2*y)+rx2;
			}
			pixel(xc+x,yc+y, caracter, Fondo, Texto);
	        pixel(xc-x,yc+y, caracter, Fondo, Texto);
	        pixel(xc+x,yc-y, caracter, Fondo, Texto);
	        pixel(xc-x,yc-y, caracter, Fondo, Texto);
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
	pixel(xc, yc+ry, caracter, Fondo, Texto);
	pixel(xc, yc-ry, caracter, Fondo, Texto);
	rx2=pow(rx,2);
	ry2=pow(ry,2);
	p1=ry2-(rx2*ry)+(0.25*rx2);
	while((ry2*x)<(rx2*y))
	{
		if(p1<0)
		{
			x++;
			p1=p1+(2*ry2*x)+ry2;
		} else {
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
		} else {
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
      for(i=0;i<v;i++){ linea(p[i].x-1,p[i].y,p[i+1].x,p[i+1].y, Caracter, Fondo, Texto); }
      for(int i=0; i<c;i+=2){ lineax(inter[i],inter[i+1],s, Caracter, Fondo,Texto); }
        s++;
    }
}

void bezier(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0, int x4 = 0, int y4 = 0, unsigned int Caracter = 219, unsigned int Fondo = 0, unsigned int Texto = 15){
	for(double t=0.0;t<1.0;t+=0.005)
	{
		double xt=pow(1-t,3)*x1+3*t*pow(1-t,2)*x2+3*pow(t,2)*(1-t)*x3+pow(t,3)*x4;
		double yt=pow(1-t,3)*y1+3*t*pow(1-t,2)*y2+3*pow(t,2)*(1-t)*y3+pow(t,3)*y4;
		pixel(xt,yt, Caracter, Fondo, Texto);
	}
}

double getPt( double n1 , double n2 , float perc ){
	double diff = n2 - n1;
	return n1 + ( diff * perc );
}

void bezier3(int x1, int y1, int x2, int y2, int x3, int y3, unsigned int Caracter, unsigned int Fondo, unsigned int Texto){
	float xa;
	float ya;
	float xb;
	float yb;

	int x;
	int y;

	for(float i=0; i<1; i+=0.001)
	{
		xa = getPt(x1, x2, i);
    	ya = getPt(y1, y2, i);
    	xb = getPt(x2, x3, i);
   	 	yb = getPt(y2, y3, i);

   	 	x = getPt( xa , xb , i );
    	y = getPt( ya , yb , i );
    	pixel(x, y, Caracter, Fondo, Texto);
    }
}

void bezier4(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Caracter, unsigned int Fondo, unsigned int Texto){
	float xa;
	float ya;
	float xb;
	float yb;
	float xc;
	float yc;

	float xm;
	float ym;
	float xn;
	float yn;

	int x;
	int y;

	for(float i=0; i<1; i+=0.001)
	{
		xa = getPt( x1 , x2 , i );
    	ya = getPt( y1 , y2 , i );
    	xb = getPt( x2 , x3 , i );
    	yb = getPt( y2 , y3 , i );
    	xc = getPt( x3 , x4 , i );
    	yc = getPt( y3 , y4 , i );

    	xm = getPt( xa , xb , i );
    	ym = getPt( ya , yb , i );
    	xn = getPt( xb , xc , i );
    	yn = getPt( yb , yc , i );

    	x = getPt( xm , xn , i );
    	y = getPt( ym , yn , i );
    	pixel(x, y, Caracter, Fondo, Texto);
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

void polyrectangulo(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Caracter, unsigned int Fondo, unsigned int Texto){
	linea(x1,y1, x2, x2, Caracter, Fondo, Texto);
	linea(x2,y2, x3, y3, Caracter, Fondo, Texto);
	linea(x3,y3, x4, y4, Caracter, Fondo, Texto);
	linea(x4,y4, x1, y1, Caracter, Fondo, Texto);
}

void polyrectangulofill(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Caracter, unsigned int Fondo, unsigned int Texto){
	point PUNTOS_[4];
	PUNTOS_[0].x = x1;
	PUNTOS_[0].y = y1;
	PUNTOS_[1].x = x2;
	PUNTOS_[1].y = y2;
	PUNTOS_[2].x = x3;
	PUNTOS_[2].y = y3;
	PUNTOS_[3].x = x4;
	PUNTOS_[3].y = y4;
	poligonfill(4, PUNTOS_, Caracter, Fondo, Texto);
}




// ##########################################################
// ##########################################################
// ##################### LEYENDO IMAGNES ####################
// ##########################################################
// ##########################################################

void readbmp(const std::string filename, std::vector<unsigned int> *Puntero_Data_BMP){
	FILE* f = fopen(filename.c_str(), "rb");
	if(f == NULL){ printf("ERROR CON EL ARCHIVO BMP : %s\n", filename.c_str()); exit(0); }
    unsigned char info[54];
    fread(info, sizeof(unsigned char), 54, f);
    int width = *(int*)&info[18];
    int height = *(int*)&info[22];
    Puntero_Data_BMP->push_back(width);
    Puntero_Data_BMP->push_back(height);
    int row_padded = (width*3 + 3) & (~3);
    unsigned char* data = new unsigned char[row_padded];
    unsigned char tmp;
    for(int i = 0; i < height; i++)
    {
    	fread(data, sizeof(unsigned char), row_padded, f);
    	for(int j = 0; j < width*3; j += 3){
    		tmp = data[j];
            data[j] = data[j+2];
            data[j+2] = tmp;
            Puntero_Data_BMP->push_back(RGB(
                (int)data[j + 0],
                (int)data[j + 1],
                (int)data[j + 2]));
        }
    }
    fclose(f);
}

void leerbmp(const std::string filename, std::vector<unsigned int> *Puntero_Data_BMP){
	FILE* f = fopen(filename.c_str(), "rb");
	if(f == NULL){ printf("ERROR CON EL ARCHIVO BMP : %s\n", filename.c_str()); exit(0); }
    unsigned char info[54];
    fread(info, sizeof(unsigned char), 54, f);
    int width = *(int*)&info[18];
    int height = *(int*)&info[22];
    Puntero_Data_BMP->push_back(width);
    Puntero_Data_BMP->push_back(height);
    int row_padded = (width*3 + 3) & (~3);
    unsigned char* data = new unsigned char[row_padded];
    unsigned char tmp;
    for(int i = 0; i < height; i++)
    {
    	fread(data, sizeof(unsigned char), row_padded, f);
    	for(int j = 0; j < width*3; j += 3){
    		tmp = data[j];
            data[j] = data[j+2];
            data[j+2] = tmp;
            Puntero_Data_BMP->push_back(RGB(
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

char brightness(COLORREF _1){
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

            pixel(Xpos,Ypos, brightness(Datas[Index]), 0,RGB16(Datas[Index]));
        }
    }
    Index = 0;
    return EXIT_SUCCESS;
}

bool mostrarbmp(std::vector<unsigned int> Datas, int x = 0, int y = 0){
    int Index = 0, Xpos, Ypos,
    ANCHO = Datas[0],
    ALTO = Datas[1];

    unsigned char R,G,B;

    for (int i = 0; i < ALTO; i+=1)
    {
        for (int o = 0; o < ANCHO; o+=1)
        {
            Index = (i*ANCHO+o)+2;

            Xpos = o+x-(ANCHO/2);
            Ypos = (ALTO-i-1)+y-(ALTO/2);
            R = GetRValue(Datas[Index]);
            G = GetGValue(Datas[Index]);
            B = GetBValue(Datas[Index]);

            pixel(Xpos,Ypos, brightness(Datas[Index]), 0,RGB16(Datas[Index]));
            // pixel(Xpos,Ypos, 219, RGB16(Datas[Index]), _RGB16BIT(R,G,B));
        }
    }

    return EXIT_SUCCESS;
}

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
      if (MODE>=0) lineax(xt, xt+2, yt, brightness(RGB(R,G,B)), RGB16(RGB(R/2,G/2,B/2)), RGB16(RGB(R,G,B)) );
      if (MODE>=1) lineax(xt, xt+2, yt, brightness(RGB(R/2,G/2,B/2)), RGB16(RGB(R/2,G/2,B/2)), RGB16(RGB(R,G,B)) );
      if (MODE>=2) lineax(xt, xt+2, yt, brightness(RGB(R,G,B)), RGB16(RGB(R,G,B)), RGB16(RGB(R/2,G/2,B/2)) );
      if (MODE>=3) lineax(xt, xt+2, yt, brightness(RGB(R,G,B)), RGB16(RGB(R,G,B)), RGB16(RGB(R/2,G/2,B/2)) );
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

std::string arraycaracter(char const *n){
  char s[MAXBYTE];
  sprintf(s,"%s",n);
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

#define ctrlenmemoria(array) ( sizeof(array) / sizeof( (array)[0] ) )

#define ctrlenmemory(array) ( sizeof(array) / sizeof( (array)[0] ) )

int ctrlen(const char cadena[]){
  int i=0;
  for (i = 0; cadena[i]!='\0'; ++i){}
  return i;
}

#define random(minimo,maximo) ( minimo + rand() / (RAND_MAX / (maximo - minimo + 1 ) + 1))

int vX(){return NEW_MOTOR2D.MOTOR2D_W;}

int vY(){return NEW_MOTOR2D.MOTOR2D_H;}

int vx(){return NEW_MOTOR2D.MOTOR2D_W;}

int vy(){return NEW_MOTOR2D.MOTOR2D_H;}

void coordxy(int x, int y, unsigned int caracterX, unsigned int caracterY, unsigned int Fondo, unsigned int Texto){
  lineay(0, vy(), x, caracterY, Fondo, Texto);
  lineax(0, vx(), y, caracterX, Fondo, Texto);
}

#define espera(espera) (Sleep(espera))

void titulo(const std::string TITULO){
  SetConsoleTitle((LPCSTR)TITULO.c_str());
}

void title(const std::string TITULO){
  SetConsoleTitle((LPCSTR)TITULO.c_str());
}

int distancia(int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
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

void sonido(LPCSTR SONIDO, int modo = 0){
	switch(modo){
		case 0:{ PlaySound((LPCSTR)SONIDO, NULL, SND_ASYNC); break;}
		case 1:{ PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_ASYNC); break;}
		case 2:{ PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); break;}
	}
}

void sound(LPCSTR SONIDO, int modo = 0){
	switch(modo){
		case 0:{ PlaySound((LPCSTR)SONIDO, NULL, SND_ASYNC); break;}
		case 1:{ PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_ASYNC); break;}
		case 2:{ PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); break;}
	}
}

// #define sound(SONIDO) (PlaySound((LPCSTR)SONIDO, NULL, SND_FILENAME | SND_LOOP | SND_ASYNC))

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

bool keydown(BYTE K){
  if(enfoco()){
    return GetAsyncKeyState(K) < 0;
  }
  return 0;
}

bool onoff(int vkey) { return GetKeyState(vkey) > 0; }

bool tecla(BYTE K){
  if(enfoco()){
    return GetAsyncKeyState(K) < 0;
  }
  return 0;
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




// ##################################################################
// ##################################################################
// ############################ SONIDOS #############################
// ##################################################################
// ##################################################################

float frequenciasonido(const float *FREQ, const float Tiempos[], unsigned int Repetir = 1){
  // Tambien puede ser: sizeof(FREQ) * 2 + 1;
  int TIME = sizeof(FREQ) + sizeof(FREQ) + 1;
  iniciartiempo();
  for (int i = 1; i <= Repetir; ++i){
    for (int o = 0; o < TIME; ++o)
    {
      Beep((DWORD)FREQ[o], (DWORD)Tiempos[o]);
    }
  }
  finaltiempo();
  return mostrartiempo();
}





// ##################################################################
// ##################################################################
// ##################### ALGUNAS FUNCIONES DE OLC ###################
// ##################################################################
// ##################################################################

enum COLOUR
{
  FG_BLACK    = 0x0000,
  FG_DARK_BLUE    = 0x0001,
  FG_DARK_GREEN   = 0x0002,
  FG_DARK_CYAN    = 0x0003,
  FG_DARK_RED     = 0x0004,
  FG_DARK_MAGENTA = 0x0005,
  FG_DARK_YELLOW  = 0x0006,
  FG_GREY     = 0x0007,
  FG_DARK_GREY    = 0x0008,
  FG_BLUE     = 0x0009,
  FG_GREEN    = 0x000A,
  FG_CYAN     = 0x000B,
  FG_RED      = 0x000C,
  FG_MAGENTA    = 0x000D,
  FG_YELLOW   = 0x000E,
  FG_WHITE    = 0x000F,
  BG_BLACK    = 0x0000,
  BG_DARK_BLUE  = 0x0010,
  BG_DARK_GREEN = 0x0020,
  BG_DARK_CYAN  = 0x0030,
  BG_DARK_RED   = 0x0040,
  BG_DARK_MAGENTA = 0x0050,
  BG_DARK_YELLOW  = 0x0060,
  BG_GREY     = 0x0070,
  BG_DARK_GREY  = 0x0080,
  BG_BLUE     = 0x0090,
  BG_GREEN    = 0x00A0,
  BG_CYAN     = 0x00B0,
  BG_RED      = 0x00C0,
  BG_MAGENTA    = 0x00D0,
  BG_YELLOW   = 0x00E0,
  BG_WHITE    = 0x00F0,
};

enum PIXEL_TYPE
{
  PIXEL_SOLID = 219,
  PIXEL_THREEQUARTERS = 178,
  PIXEL_HALF = 177,
  PIXEL_QUARTER = 176,
};

class olcSprite
{
public:
  olcSprite()
  {

  }

  olcSprite(int w, int h)
  {
    Create(w, h);
  }

  olcSprite(std::wstring sFile)
  {
    if (!Load(sFile))
      Create(8, 8);
  }

  int nWidth = 0;
  int nHeight = 0;

private:
  short *m_Glyphs = nullptr;
  short *m_Colours = nullptr;

  void Create(int w, int h)
  {
    nWidth = w;
    nHeight = h;
    m_Glyphs = new short[w*h];
    m_Colours = new short[w*h];
    for (int i = 0; i < w*h; i++)
    {
      m_Glyphs[i] = L' ';
      m_Colours[i] = FG_BLACK;
    }
  }

public:
  void SetGlyph(int x, int y, short c)
  {
    if (x <0 || x >= nWidth || y < 0 || y >= nHeight)
      return;
    else
      m_Glyphs[y * nWidth + x] = c;
  }

  void SetColour(int x, int y, short c)
  {
    if (x <0 || x >= nWidth || y < 0 || y >= nHeight)
      return;
    else
      m_Colours[y * nWidth + x] = c;
  }

  short GetGlyph(int x, int y)
  {
    if (x <0 || x >= nWidth || y < 0 || y >= nHeight)
      return L' ';
    else
      return m_Glyphs[y * nWidth + x];
  }

  short GetColour(int x, int y)
  {
    if (x <0 || x >= nWidth || y < 0 || y >= nHeight)
      return FG_BLACK;
    else
      return m_Colours[y * nWidth + x];
  }

  short SampleGlyph(float x, float y)
  {
    int sx = (int)(x * (float)nWidth);
    int sy = (int)(y * (float)nHeight-1.0f);
    if (sx <0 || sx >= nWidth || sy < 0 || sy >= nHeight)
      return L' ';
    else
      return m_Glyphs[sy * nWidth + sx];
  }

  short SampleColour(float x, float y)
  {
    int sx = (int)(x * (float)nWidth);
    int sy = (int)(y * (float)nHeight-1.0f);
    if (sx <0 || sx >= nWidth || sy < 0 || sy >= nHeight)
      return FG_BLACK;
    else
      return m_Colours[sy * nWidth + sx];
  }

  bool Save(std::wstring sFile)
  {
    FILE *f = nullptr;
    _wfopen_s(&f, sFile.c_str(), L"wb");
    if (f == nullptr)
      return false;

    fwrite(&nWidth, sizeof(int), 1, f);
    fwrite(&nHeight, sizeof(int), 1, f);
    fwrite(m_Colours, sizeof(short), nWidth * nHeight, f);
    fwrite(m_Glyphs, sizeof(short), nWidth * nHeight, f);

    fclose(f);

    return true;
  }

  bool Load(std::wstring sFile)
  {
    delete[] m_Glyphs;
    delete[] m_Colours;
    nWidth = 0;
    nHeight = 0;

    FILE *f = nullptr;
    _wfopen_s(&f, sFile.c_str(), L"rb");
    if (f == nullptr)
      return false;

    std::fread(&nWidth, sizeof(int), 1, f);
    std::fread(&nHeight, sizeof(int), 1, f);

    Create(nWidth, nHeight);

    std::fread(m_Colours, sizeof(short), nWidth * nHeight, f);
    std::fread(m_Glyphs, sizeof(short), nWidth * nHeight, f);

    std::fclose(f);
    return true;
  }
};

void DrawSprite(int x, int y, olcSprite *sprite){
  if (sprite == nullptr) return;

  for (int i = 0; i < sprite->nWidth; i++){
    for (int j = 0; j < sprite->nHeight; j++){
      if (sprite->GetGlyph(i, j) != L' ')
        pixel(x + i, y + j, 219,  sprite->GetColour(i, j)/2,sprite->GetColour(i, j));
    }
  }
}

void DrawPartialSprite(int x, int y, olcSprite *sprite, int ox, int oy, int w, int h){
  if (sprite == nullptr) return;

  for (int i = 0; i < w; i++){
    for (int j = 0; j < h; j++){
      if (sprite->GetGlyph(i+ox, j+oy) != L' ')
        pixel(x + i, y + j, 219, sprite->GetColour(i, j)/2, sprite->GetColour(i+ox, j+oy));
    }
  }
}






// ############################################################
// ############################################################
// #################### INVERTIR DE COLORES ###################
// ############################################################
// ############################################################

void invert_linea(int x0 = 0, int y0 = 0, int x1 = 0, int y1 = 0){
	int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
	int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1;
	int err = (dx>dy ? dx : -dy)/2, e2;
	while(true){
		pixel(x0,y0, (getpixelchar(x0,y0)), 0, (15-getpixelcolor(x0,y0)));
		if (x0==x1 && y0==y1) break;
		e2 = err;
		if (e2 >-dx) { err -= dy; x0 += sx; }
		if (e2 < dy) { err += dx; y0 += sy; }
	}
}

void invert_rectangulo(int X = 0, int Y = 0, int X2 = 0, int Y2 = 0){
	voltear(&X,&X2);
	voltear(&Y,&Y2);
	invert_linea(X, Y, X2, Y);
	invert_linea(X2,Y+1, X2,Y2-1);
	invert_linea(X2,Y2, X,Y2);
	invert_linea(X, Y2-1, X, Y+1);
}

void invert_rectangulofill(int x = 0, int y = 0, int w = 0, int h = 0){
	voltear(&x, &w);
	voltear(&y, &h);
	for (int X = x+1; X < w; ++X)
	{
		for (int Y = y+1; Y < h; ++Y)
		{
			pixel(X,Y, (getpixelchar(X,Y)), 0, (15-getpixelcolor(X,Y)));
		}
	}
	invert_rectangulo(x,y,w,h);
}

void invert_lineax(int x = 0, int w = 0, int y = 0){
	voltear(&x, &w);
	for (int i = x; i < w; ++i)
	{
		pixel(i,y, (getpixelchar(i,y)), 0, (getpixelcolor(i,y)));
	}
}

void invert_lineay(int y = 0, int h = 0, int x = 0){
    voltear(&y, &h);
    for (int i = y; i < h; ++i)
    {
        pixel(x,i, (getpixelchar(x,i)), 0, (getpixelcolor(x,i)));
    }
}

void invert_bezier(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0, int x4 = 0, int y4 = 0){
	for(double t=0.0;t<1.0;t+=0.005)
	{
		double xt=pow(1-t,3)*x1+3*t*pow(1-t,2)*x2+3*pow(t,2)*(1-t)*x3+pow(t,3)*x4;
		double yt=pow(1-t,3)*y1+3*t*pow(1-t,2)*y2+3*pow(t,2)*(1-t)*y3+pow(t,3)*y4;
		pixel(xt,yt, (getpixelchar(xt,yt)), 0, (getpixelcolor(xt,yt)));
	}
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
