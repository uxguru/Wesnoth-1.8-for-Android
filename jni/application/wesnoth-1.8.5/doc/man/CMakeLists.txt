SET(MANPAGES)
if(ENABLE_GAME)
  SET(MANPAGES ${MANPAGES} wesnoth.6)
endif()
if(ENABLE_SERVER)
  SET(MANPAGES ${MANPAGES} wesnothd.6)
endif()

foreach(MANPAGE ${MANPAGES})
  install(FILES ${MANPAGE} DESTINATION "${MANDIR}/man6/")

  if(ENABLE_NLS)
    foreach(LANG ${LINGUAS})
      install(FILES ${LANG}/${MANPAGE} DESTINATION "${MANDIR}/${LANG}/man6/" OPTIONAL)
    endforeach(LANG ${LINGUAS})
  endif(ENABLE_NLS)
endforeach(MANPAGE ${MANPAGES})
