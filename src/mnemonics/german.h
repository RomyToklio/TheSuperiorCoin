// Word list created by Superior contributor Shrikez
// 
// Copyright (c) 2014-2019, SuperiorCoin Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file german.h
 * 
 * \brief German word list and map.
 */

#ifndef GERMAN_H
#define GERMAN_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class German: public Base
  {
  public:
    German(): Base("Deutsch", "German", {}, 4)
    {
      static constexpr const char * const words[NWORDS] =
      {
        "Abakus",
        "Abart",
        "abbilden",
        "Abbruch",
        "Abdrift",
        "Abendrot",
        "Abfahrt",
        "abfeuern",
        "Abflug",
        "abfragen",
        "Abglanz",
        "abhärten",
        "abheben",
        "Abhilfe",
        "Abitur",
        "Abkehr",
        "Ablauf",
        "ablecken",
        "Ablösung",
        "Abnehmer",
        "abnutzen",
        "Abonnent",
        "Abrasion",
        "Abrede",
        "abrüsten",
        "Absicht",
        "Absprung",
        "Abstand",
        "absuchen",
        "Abteil",
        "Abundanz",
        "abwarten",
        "Abwurf",
        "Abzug",
        "Achse",
        "Achtung",
        "Acker",
        "Aderlass",
        "Adler",
        "Admiral",
        "Adresse",
        "Affe",
        "Affront",
        "Afrika",
        "Aggregat",
        "Agilität",
        "ähneln",
        "Ahnung",
        "Ahorn",
        "Akazie",
        "Akkord",
        "Akrobat",
        "Aktfoto",
        "Aktivist",
        "Albatros",
        "Alchimie",
        "Alemanne",
        "Alibi",
        "Alkohol",
        "Allee",
        "Allüre",
        "Almosen",
        "Almweide",
        "Aloe",
        "Alpaka",
        "Alpental",
        "Alphabet",
        "Alpinist",
        "Alraune",
        "Altbier",
        "Alter",
        "Altflöte",
        "Altruist",
        "Alublech",
        "Aludose",
        "Amateur",
        "Amazonas",
        "Ameise",
        "Amnesie",
        "Amok",
        "Ampel",
        "Amphibie",
        "Ampulle",
        "Amsel",
        "Amulett",
        "Anakonda",
        "Analogie",
        "Ananas",
        "Anarchie",
        "Anatomie",
        "Anbau",
        "Anbeginn",
        "anbieten",
        "Anblick",
        "ändern",
        "andocken",
        "Andrang",
        "anecken",
        "Anflug",
        "Anfrage",
        "Anführer",
        "Angebot",
        "Angler",
        "Anhalter",
        "Anhöhe",
        "Animator",
        "Anis",
        "Anker",
        "ankleben",
        "Ankunft",
        "Anlage",
        "anlocken",
        "Anmut",
        "Annahme",
        "Anomalie",
        "Anonymus",
        "Anorak",
        "anpeilen",
        "Anrecht",
        "Anruf",
        "Ansage",
        "Anschein",
        "Ansicht",
        "Ansporn",
        "Anteil",
        "Antlitz",
        "Antrag",
        "Antwort",
        "Anwohner",
        "Aorta",
        "Apfel",
        "Appetit",
        "Applaus",
        "Aquarium",
        "Arbeit",
        "Arche",
        "Argument",
        "Arktis",
        "Armband",
        "Aroma",
        "Asche",
        "Askese",
        "Asphalt",
        "Asteroid",
        "Ästhetik",
        "Astronom",
        "Atelier",
        "Athlet",
        "Atlantik",
        "Atmung",
        "Audienz",
        "aufatmen",
        "Auffahrt",
        "aufholen",
        "aufregen",
        "Aufsatz",
        "Auftritt",
        "Aufwand",
        "Augapfel",
        "Auktion",
        "Ausbruch",
        "Ausflug",
        "Ausgabe",
        "Aushilfe",
        "Ausland",
        "Ausnahme",
        "Aussage",
        "Autobahn",
        "Avocado",
        "Axthieb",
        "Bach",
        "backen",
        "Badesee",
        "Bahnhof",
        "Balance",
        "Balkon",
        "Ballett",
        "Balsam",
        "Banane",
        "Bandage",
        "Bankett",
        "Barbar",
        "Barde",
        "Barett",
        "Bargeld",
        "Barkasse",
        "Barriere",
        "Bart",
        "Bass",
        "Bastler",
        "Batterie",
        "Bauch",
        "Bauer",
        "Bauholz",
        "Baujahr",
        "Baum",
        "Baustahl",
        "Bauteil",
        "Bauweise",
        "Bazar",
        "beachten",
        "Beatmung",
        "beben",
        "Becher",
        "Becken",
        "bedanken",
        "beeilen",
        "beenden",
        "Beere",
        "befinden",
        "Befreier",
        "Begabung",
        "Begierde",
        "begrüßen",
        "Beiboot",
        "Beichte",
        "Beifall",
        "Beigabe",
        "Beil",
        "Beispiel",
        "Beitrag",
        "beizen",
        "bekommen",
        "beladen",
        "Beleg",
        "bellen",
        "belohnen",
        "Bemalung",
        "Bengel",
        "Benutzer",
        "Benzin",
        "beraten",
        "Bereich",
        "Bergluft",
        "Bericht",
        "Bescheid",
        "Besitz",
        "besorgen",
        "Bestand",
        "Besuch",
        "betanken",
        "beten",
        "betören",
        "Bett",
        "Beule",
        "Beute",
        "Bewegung",
        "bewirken",
        "Bewohner",
        "bezahlen",
        "Bezug",
        "biegen",
        "Biene",
        "Bierzelt",
        "bieten",
        "Bikini",
        "Bildung",
        "Billard",
        "binden",
        "Biobauer",
        "Biologe",
        "Bionik",
        "Biotop",
        "Birke",
        "Bison",
        "Bitte",
        "Biwak",
        "Bizeps",
        "blasen",
        "Blatt",
        "Blauwal",
        "Blende",
        "Blick",
        "Blitz",
        "Blockade",
        "Blödelei",
        "Blondine",
        "Blues",
        "Blume",
        "Blut",
        "Bodensee",
        "Bogen",
        "Boje",
        "Bollwerk",
        "Bonbon",
        "Bonus",
        "Boot",
        "Bordarzt",
        "Börse",
        "Böschung",
        "Boudoir",
        "Boxkampf",
        "Boykott",
        "Brahms",
        "Brandung",
        "Brauerei",
        "Brecher",
        "Breitaxt",
        "Bremse",
        "brennen",
        "Brett",
        "Brief",
        "Brigade",
        "Brillanz",
        "bringen",
        "brodeln",
        "Brosche",
        "Brötchen",
        "Brücke",
        "Brunnen",
        "Brüste",
        "Brutofen",
        "Buch",
        "Büffel",
        "Bugwelle",
        "Bühne",
        "Buletten",
        "Bullauge",
        "Bumerang",
        "bummeln",
        "Buntglas",
        "Bürde",
        "Burgherr",
        "Bursche",
        "Busen",
        "Buslinie",
        "Bussard",
        "Butangas",
        "Butter",
        "Cabrio",
        "campen",
        "Captain",
        "Cartoon",
        "Cello",
        "Chalet",
        "Charisma",
        "Chefarzt",
        "Chiffon",
        "Chipsatz",
        "Chirurg",
        "Chor",
        "Chronik",
        "Chuzpe",
        "Clubhaus",
        "Cockpit",
        "Codewort",
        "Cognac",
        "Coladose",
        "Computer",
        "Coupon",
        "Cousin",
        "Cracking",
        "Crash",
        "Curry",
        "Dach",
        "Dackel",
        "daddeln",
        "daliegen",
        "Dame",
        "Dammbau",
        "Dämon",
        "Dampflok",
        "Dank",
        "Darm",
        "Datei",
        "Datsche",
        "Datteln",
        "Datum",
        "Dauer",
        "Daunen",
        "Deckel",
        "Decoder",
        "Defekt",
        "Degen",
        "Dehnung",
        "Deiche",
        "Dekade",
        "Dekor",
        "Delfin",
        "Demut",
        "denken",
        "Deponie",
        "Design",
        "Desktop",
        "Dessert",
        "Detail",
        "Detektiv",
        "Dezibel",
        "Diadem",
        "Diagnose",
        "Dialekt",
        "Diamant",
        "Dichter",
        "Dickicht",
        "Diesel",
        "Diktat",
        "Diplom",
        "Direktor",
        "Dirne",
        "Diskurs",
        "Distanz",
        "Docht",
        "Dohle",
        "Dolch",
        "Domäne",
        "Donner",
        "Dorade",
        "Dorf",
        "Dörrobst",
        "Dorsch",
        "Dossier",
        "Dozent",
        "Drachen",
        "Draht",
        "Drama",
        "Drang",
        "Drehbuch",
        "Dreieck",
        "Dressur",
        "Drittel",
        "Drossel",
        "Druck",
        "Duell",
        "Duft",
        "Düne",
        "Dünung",
        "dürfen",
        "Duschbad",
        "Düsenjet",
        "Dynamik",
        "Ebbe",
        "Echolot",
        "Echse",
        "Eckball",
        "Edding",
        "Edelweiß",
        "Eden",
        "Edition",
        "Efeu",
        "Effekte",
        "Egoismus",
        "Ehre",
        "Eiablage",
        "Eiche",
        "Eidechse",
        "Eidotter",
        "Eierkopf",
        "Eigelb",
        "Eiland",
        "Eilbote",
        "Eimer",
        "einatmen",
        "Einband",
        "Eindruck",
        "Einfall",
        "Eingang",
        "Einkauf",
        "einladen",
        "Einöde",
        "Einrad",
        "Eintopf",
        "Einwurf",
        "Einzug",
        "Eisbär",
        "Eisen",
        "Eishöhle",
        "Eismeer",
        "Eiweiß",
        "Ekstase",
        "Elan",
        "Elch",
        "Elefant",
        "Eleganz",
        "Element",
        "Elfe",
        "Elite",
        "Elixier",
        "Ellbogen",
        "Eloquenz",
        "Emigrant",
        "Emission",
        "Emotion",
        "Empathie",
        "Empfang",
        "Endzeit",
        "Energie",
        "Engpass",
        "Enkel",
        "Enklave",
        "Ente",
        "entheben",
        "Entität",
        "entladen",
        "Entwurf",
        "Episode",
        "Epoche",
        "erachten",
        "Erbauer",
        "erblühen",
        "Erdbeere",
        "Erde",
        "Erdgas",
        "Erdkunde",
        "Erdnuss",
        "Erdöl",
        "Erdteil",
        "Ereignis",
        "Eremit",
        "erfahren",
        "Erfolg",
        "erfreuen",
        "erfüllen",
        "Ergebnis",
        "erhitzen",
        "erkalten",
        "erkennen",
        "erleben",
        "Erlösung",
        "ernähren",
        "erneuern",
        "Ernte",
        "Eroberer",
        "eröffnen",
        "Erosion",
        "Erotik",
        "Erpel",
        "erraten",
        "Erreger",
        "erröten",
        "Ersatz",
        "Erstflug",
        "Ertrag",
        "Eruption",
        "erwarten",
        "erwidern",
        "Erzbau",
        "Erzeuger",
        "erziehen",
        "Esel",
        "Eskimo",
        "Eskorte",
        "Espe",
        "Espresso",
        "essen",
        "Etage",
        "Etappe",
        "Etat",
        "Ethik",
        "Etikett",
        "Etüde",
        "Eule",
        "Euphorie",
        "Europa",
        "Everest",
        "Examen",
        "Exil",
        "Exodus",
        "Extrakt",
        "Fabel",
        "Fabrik",
        "Fachmann",
        "Fackel",
        "Faden",
        "Fagott",
        "Fahne",
        "Faible",
        "Fairness",
        "Fakt",
        "Fakultät",
        "Falke",
        "Fallobst",
        "Fälscher",
        "Faltboot",
        "Familie",
        "Fanclub",
        "Fanfare",
        "Fangarm",
        "Fantasie",
        "Farbe",
        "Farmhaus",
        "Farn",
        "Fasan",
        "Faser",
        "Fassung",
        "fasten",
        "Faulheit",
        "Fauna",
        "Faust",
        "Favorit",
        "Faxgerät",
        "Fazit",
        "fechten",
        "Federboa",
        "Fehler",
        "Feier",
        "Feige",
        "feilen",
        "Feinripp",
        "Feldbett",
        "Felge",
        "Fellpony",
        "Felswand",
        "Ferien",
        "Ferkel",
        "Fernweh",
        "Ferse",
        "Fest",
        "Fettnapf",
        "Feuer",
        "Fiasko",
        "Fichte",
        "Fiktion",
        "Film",
        "Filter",
        "Filz",
        "Finanzen",
        "Findling",
        "Finger",
        "Fink",
        "Finnwal",
        "Fisch",
        "Fitness",
        "Fixpunkt",
        "Fixstern",
        "Fjord",
        "Flachbau",
        "Flagge",
        "Flamenco",
        "Flanke",
        "Flasche",
        "Flaute",
        "Fleck",
        "Flegel",
        "flehen",
        "Fleisch",
        "fliegen",
        "Flinte",
        "Flirt",
        "Flocke",
        "Floh",
        "Floskel",
        "Floß",
        "Flöte",
        "Flugzeug",
        "Flunder",
        "Flusstal",
        "Flutung",
        "Fockmast",
        "Fohlen",
        "Föhnlage",
        "Fokus",
        "folgen",
        "Foliant",
        "Folklore",
        "Fontäne",
        "Förde",
        "Forelle",
        "Format",
        "Forscher",
        "Fortgang",
        "Forum",
        "Fotograf",
        "Frachter",
        "Fragment",
        "Fraktion",
        "fräsen",
        "Frauenpo",
        "Freak",
        "Fregatte",
        "Freiheit",
        "Freude",
        "Frieden",
        "Frohsinn",
        "Frosch",
        "Frucht",
        "Frühjahr",
        "Fuchs",
        "Fügung",
        "fühlen",
        "Füller",
        "Fundbüro",
        "Funkboje",
        "Funzel",
        "Furnier",
        "Fürsorge",
        "Fusel",
        "Fußbad",
        "Futteral",
        "Gabelung",
        "gackern",
        "Gage",
        "gähnen",
        "Galaxie",
        "Galeere",
        "Galopp",
        "Gameboy",
        "Gamsbart",
        "Gandhi",
        "Gang",
        "Garage",
        "Gardine",
        "Garküche",
        "Garten",
        "Gasthaus",
        "Gattung",
        "gaukeln",
        "Gazelle",
        "Gebäck",
        "Gebirge",
        "Gebräu",
        "Geburt",
        "Gedanke",
        "Gedeck",
        "Gedicht",
        "Gefahr",
        "Gefieder",
        "Geflügel",
        "Gefühl",
        "Gegend",
        "Gehirn",
        "Gehöft",
        "Gehweg",
        "Geige",
        "Geist",
        "Gelage",
        "Geld",
        "Gelenk",
        "Gelübde",
        "Gemälde",
        "Gemeinde",
        "Gemüse",
        "genesen",
        "Genuss",
        "Gepäck",
        "Geranie",
        "Gericht",
        "Germane",
        "Geruch",
        "Gesang",
        "Geschenk",
        "Gesetz",
        "Gesindel",
        "Gesöff",
        "Gespan",
        "Gestade",
        "Gesuch",
        "Getier",
        "Getränk",
        "Getümmel",
        "Gewand",
        "Geweih",
        "Gewitter",
        "Gewölbe",
        "Geysir",
        "Giftzahn",
        "Gipfel",
        "Giraffe",
        "Gitarre",
        "glänzen",
        "Glasauge",
        "Glatze",
        "Gleis",
        "Globus",
        "Glück",
        "glühen",
        "Glutofen",
        "Goldzahn",
        "Gondel",
        "gönnen",
        "Gottheit",
        "graben",
        "Grafik",
        "Grashalm",
        "Graugans",
        "greifen",
        "Grenze",
        "grillen",
        "Groschen",
        "Grotte",
        "Grube",
        "Grünalge",
        "Gruppe",
        "gruseln",
        "Gulasch",
        "Gummibär",
        "Gurgel",
        "Gürtel",
        "Güterzug",
        "Haarband",
        "Habicht",
        "hacken",
        "hadern",
        "Hafen",
        "Hagel",
        "Hähnchen",
        "Haifisch",
        "Haken",
        "Halbaffe",
        "Halsader",
        "halten",
        "Halunke",
        "Handbuch",
        "Hanf",
        "Harfe",
        "Harnisch",
        "härten",
        "Harz",
        "Hasenohr",
        "Haube",
        "hauchen",
        "Haupt",
        "Haut",
        "Havarie",
        "Hebamme",
        "hecheln",
        "Heck",
        "Hedonist",
        "Heiler",
        "Heimat",
        "Heizung",
        "Hektik",
        "Held",
        "helfen",
        "Helium",
        "Hemd",
        "hemmen",
        "Hengst",
        "Herd",
        "Hering",
        "Herkunft",
        "Hermelin",
        "Herrchen",
        "Herzdame",
        "Heulboje",
        "Hexe",
        "Hilfe",
        "Himbeere",
        "Himmel",
        "Hingabe",
        "hinhören",
        "Hinweis",
        "Hirsch",
        "Hirte",
        "Hitzkopf",
        "Hobel",
        "Hochform",
        "Hocker",
        "hoffen",
        "Hofhund",
        "Hofnarr",
        "Höhenzug",
        "Hohlraum",
        "Hölle",
        "Holzboot",
        "Honig",
        "Honorar",
        "horchen",
        "Hörprobe",
        "Höschen",
        "Hotel",
        "Hubraum",
        "Hufeisen",
        "Hügel",
        "huldigen",
        "Hülle",
        "Humbug",
        "Hummer",
        "Humor",
        "Hund",
        "Hunger",
        "Hupe",
        "Hürde",
        "Hurrikan",
        "Hydrant",
        "Hypnose",
        "Ibis",
        "Idee",
        "Idiot",
        "Igel",
        "Illusion",
        "Imitat",
        "impfen",
        "Import",
        "Inferno",
        "Ingwer",
        "Inhalte",
        "Inland",
        "Insekt",
        "Ironie",
        "Irrfahrt",
        "Irrtum",
        "Isolator",
        "Istwert",
        "Jacke",
        "Jade",
        "Jagdhund",
        "Jäger",
        "Jaguar",
        "Jahr",
        "Jähzorn",
        "Jazzfest",
        "Jetpilot",
        "jobben",
        "Jochbein",
        "jodeln",
        "Jodsalz",
        "Jolle",
        "Journal",
        "Jubel",
        "Junge",
        "Junimond",
        "Jupiter",
        "Jutesack",
        "Juwel",
        "Kabarett",
        "Kabine",
        "Kabuff",
        "Käfer",
        "Kaffee",
        "Kahlkopf",
        "Kaimauer",
        "Kajüte",
        "Kaktus",
        "Kaliber",
        "Kaltluft",
        "Kamel",
        "kämmen",
        "Kampagne",
        "Kanal",
        "Känguru",
        "Kanister",
        "Kanone",
        "Kante",
        "Kanu",
        "kapern",
        "Kapitän",
        "Kapuze",
        "Karneval",
        "Karotte",
        "Käsebrot",
        "Kasper",
        "Kastanie",
        "Katalog",
        "Kathode",
        "Katze",
        "kaufen",
        "Kaugummi",
        "Kauz",
        "Kehle",
        "Keilerei",
        "Keksdose",
        "Kellner",
        "Keramik",
        "Kerze",
        "Kessel",
        "Kette",
        "keuchen",
        "kichern",
        "Kielboot",
        "Kindheit",
        "Kinnbart",
        "Kinosaal",
        "Kiosk",
        "Kissen",
        "Klammer",
        "Klang",
        "Klapprad",
        "Klartext",
        "kleben",
        "Klee",
        "Kleinod",
        "Klima",
        "Klingel",
        "Klippe",
        "Klischee",
        "Kloster",
        "Klugheit",
        "Klüngel",
        "kneten",
        "Knie",
        "Knöchel",
        "knüpfen",
        "Kobold",
        "Kochbuch",
        "Kohlrabi",
        "Koje",
        "Kokosöl",
        "Kolibri",
        "Kolumne",
        "Kombüse",
        "Komiker",
        "kommen",
        "Konto",
        "Konzept",
        "Kopfkino",
        "Kordhose",
        "Korken",
        "Korsett",
        "Kosename",
        "Krabbe",
        "Krach",
        "Kraft",
        "Krähe",
        "Kralle",
        "Krapfen",
        "Krater",
        "kraulen",
        "Kreuz",
        "Krokodil",
        "Kröte",
        "Kugel",
        "Kuhhirt",
        "Kühnheit",
        "Künstler",
        "Kurort",
        "Kurve",
        "Kurzfilm",
        "kuscheln",
        "küssen",
        "Kutter",
        "Labor",
        "lachen",
        "Lackaffe",
        "Ladeluke",
        "Lagune",
        "Laib",
        "Lakritze",
        "Lammfell",
        "Land",
        "Langmut",
        "Lappalie",
        "Last",
        "Laterne",
        "Latzhose",
        "Laubsäge",
        "laufen",
        "Laune",
        "Lausbub",
        "Lavasee",
        "Leben",
        "Leder",
        "Leerlauf",
        "Lehm",
        "Lehrer",
        "leihen",
        "Lektüre",
        "Lenker",
        "Lerche",
        "Leseecke",
        "Leuchter",
        "Lexikon",
        "Libelle",
        "Libido",
        "Licht",
        "Liebe",
        "liefern",
        "Liftboy",
        "Limonade",
        "Lineal",
        "Linoleum",
        "List",
        "Liveband",
        "Lobrede",
        "locken",
        "Löffel",
        "Logbuch",
        "Logik",
        "Lohn",
        "Loipe",
        "Lokal",
        "Lorbeer",
        "Lösung",
        "löten",
        "Lottofee",
        "Löwe",
        "Luchs",
        "Luder",
        "Luftpost",
        "Luke",
        "Lümmel",
        "Lunge",
        "lutschen",
        "Luxus",
        "Macht",
        "Magazin",
        "Magier",
        "Magnet",
        "mähen",
        "Mahlzeit",
        "Mahnmal",
        "Maibaum",
        "Maisbrei",
        "Makel",
        "malen",
        "Mammut",
        "Maniküre",
        "Mantel",
        "Marathon",
        "Marder",
        "Marine",
        "Marke",
        "Marmor",
        "Märzluft",
        "Maske",
        "Maßanzug",
        "Maßkrug",
        "Mastkorb",
        "Material",
        "Matratze",
        "Mauerbau",
        "Maulkorb",
        "Mäuschen",
        "Mäzen",
        "Medium",
        "Meinung",
        "melden",
        "Melodie",
        "Mensch",
        "Merkmal",
        "Messe",
        "Metall",
        "Meteor",
        "Methode",
        "Metzger",
        "Mieze",
        "Milchkuh",
        "Mimose",
        "Minirock",
        "Minute",
        "mischen",
        "Missetat",
        "mitgehen",
        "Mittag",
        "Mixtape",
        "Möbel",
        "Modul",
        "mögen",
        "Möhre",
        "Molch",
        "Moment",
        "Monat",
        "Mondflug",
        "Monitor",
        "Monokini",
        "Monster",
        "Monument",
        "Moorhuhn",
        "Moos",
        "Möpse",
        "Moral",
        "Mörtel",
        "Motiv",
        "Motorrad",
        "Möwe",
        "Mühe",
        "Mulatte",
        "Müller",
        "Mumie",
        "Mund",
        "Münze",
        "Muschel",
        "Muster",
        "Mythos",
        "Nabel",
        "Nachtzug",
        "Nackedei",
        "Nagel",
        "Nähe",
        "Nähnadel",
        "Namen",
        "Narbe",
        "Narwal",
        "Nasenbär",
        "Natur",
        "Nebel",
        "necken",
        "Neffe",
        "Neigung",
        "Nektar",
        "Nenner",
        "Neptun",
        "Nerz",
        "Nessel",
        "Nestbau",
        "Netz",
        "Neubau",
        "Neuerung",
        "Neugier",
        "nicken",
        "Niere",
        "Nilpferd",
        "nisten",
        "Nocke",
        "Nomade",
        "Nordmeer",
        "Notdurft",
        "Notstand",
        "Notwehr",
        "Nudismus",
        "Nuss",
        "Nutzhanf",
        "Oase",
        "Obdach",
        "Oberarzt",
        "Objekt",
        "Oboe",
        "Obsthain",
        "Ochse",
        "Odyssee",
        "Ofenholz",
        "öffnen",
        "Ohnmacht",
        "Ohrfeige",
        "Ohrwurm",
        "Ökologie",
        "Oktave",
        "Ölberg",
        "Olive",
        "Ölkrise",
        "Omelett",
        "Onkel",
        "Oper",
        "Optiker",
        "Orange",
        "Orchidee",
        "ordnen",
        "Orgasmus",
        "Orkan",
        "Ortskern",
        "Ortung",
        "Ostasien",
        "Ozean",
        "Paarlauf",
        "Packeis",
        "paddeln",
        "Paket",
        "Palast",
        "Pandabär",
        "Panik",
        "Panorama",
        "Panther",
        "Papagei",
        "Papier",
        "Paprika",
        "Paradies",
        "Parka",
        "Parodie",
        "Partner",
        "Passant",
        "Patent",
        "Patzer",
        "Pause",
        "Pavian",
        "Pedal",
        "Pegel",
        "peilen",
        "Perle",
        "Person",
        "Pfad",
        "Pfau",
        "Pferd",
        "Pfleger",
        "Physik",
        "Pier",
        "Pilotwal",
        "Pinzette",
        "Piste",
        "Plakat",
        "Plankton",
        "Platin",
        "Plombe",
        "plündern",
        "Pobacke",
        "Pokal",
        "polieren",
        "Popmusik",
        "Porträt",
        "Posaune",
        "Postamt",
        "Pottwal",
        "Pracht",
        "Pranke",
        "Preis",
        "Primat",
        "Prinzip",
        "Protest",
        "Proviant",
        "Prüfung",
        "Pubertät",
        "Pudding",
        "Pullover",
        "Pulsader",
        "Punkt",
        "Pute",
        "Putsch",
        "Puzzle",
        "Python",
        "quaken",
        "Qualle",
        "Quark",
        "Quellsee",
        "Querkopf",
        "Quitte",
        "Quote",
        "Rabauke",
        "Rache",
        "Radclub",
        "Radhose",
        "Radio",
        "Radtour",
        "Rahmen",
        "Rampe",
        "Randlage",
        "Ranzen",
        "Rapsöl",
        "Raserei",
        "rasten",
        "Rasur",
        "Rätsel",
        "Raubtier",
        "Raumzeit",
        "Rausch",
        "Reaktor",
        "Realität",
        "Rebell",
        "Rede",
        "Reetdach",
        "Regatta",
        "Regen",
        "Rehkitz",
        "Reifen",
        "Reim",
        "Reise",
        "Reizung",
        "Rekord",
        "Relevanz",
        "Rennboot",
        "Respekt",
        "Restmüll",
        "retten",
        "Reue",
        "Revolte",
        "Rhetorik",
        "Rhythmus",
        "Richtung",
        "Riegel",
        "Rindvieh",
        "Rippchen",
        "Ritter",
        "Robbe",
        "Roboter",
        "Rockband",
        "Rohdaten",
        "Roller",
        "Roman",
        "röntgen",
        "Rose",
        "Rosskur",
        "Rost",
        "Rotahorn",
        "Rotglut",
        "Rotznase",
        "Rubrik",
        "Rückweg",
        "Rufmord",
        "Ruhe",
        "Ruine",
        "Rumpf",
        "Runde",
        "Rüstung",
        "rütteln",
        "Saaltür",
        "Saatguts",
        "Säbel",
        "Sachbuch",
        "Sack",
        "Saft",
        "sagen",
        "Sahneeis",
        "Salat",
        "Salbe",
        "Salz",
        "Sammlung",
        "Samt",
        "Sandbank",
        "Sanftmut",
        "Sardine",
        "Satire",
        "Sattel",
        "Satzbau",
        "Sauerei",
        "Saum",
        "Säure",
        "Schall",
        "Scheitel",
        "Schiff",
        "Schlager",
        "Schmied",
        "Schnee",
        "Scholle",
        "Schrank",
        "Schulbus",
        "Schwan",
        "Seeadler",
        "Seefahrt",
        "Seehund",
        "Seeufer",
        "segeln",
        "Sehnerv",
        "Seide",
        "Seilzug",
        "Senf",
        "Sessel",
        "Seufzer",
        "Sexgott",
        "Sichtung",
        "Signal",
        "Silber",
        "singen",
        "Sinn",
        "Sirup",
        "Sitzbank",
        "Skandal",
        "Skikurs",
        "Skipper",
        "Skizze",
        "Smaragd",
        "Socke",
        "Sohn",
        "Sommer",
        "Songtext",
        "Sorte",
        "Spagat",
        "Spannung",
        "Spargel",
        "Specht",
        "Speiseöl",
        "Spiegel",
        "Sport",
        "spülen",
        "Stadtbus",
        "Stall",
        "Stärke",
        "Stativ",
        "staunen",
        "Stern",
        "Stiftung",
        "Stollen",
        "Strömung",
        "Sturm",
        "Substanz",
        "Südalpen",
        "Sumpf",
        "surfen",
        "Tabak",
        "Tafel",
        "Tagebau",
        "takeln",
        "Taktung",
        "Talsohle",
        "Tand",
        "Tanzbär",
        "Tapir",
        "Tarantel",
        "Tarnname",
        "Tasse",
        "Tatnacht",
        "Tatsache",
        "Tatze",
        "Taube",
        "tauchen",
        "Taufpate",
        "Taumel",
        "Teelicht",
        "Teich",
        "teilen",
        "Tempo",
        "Tenor",
        "Terrasse",
        "Testflug",
        "Theater",
        "Thermik",
        "ticken",
        "Tiefflug",
        "Tierart",
        "Tigerhai",
        "Tinte",
        "Tischler",
        "toben",
        "Toleranz",
        "Tölpel",
        "Tonband",
        "Topf",
        "Topmodel",
        "Torbogen",
        "Torlinie",
        "Torte",
        "Tourist",
        "Tragesel",
        "trampeln",
        "Trapez",
        "Traum",
        "treffen",
        "Trennung",
        "Treue",
        "Trick",
        "trimmen",
        "Trödel",
        "Trost",
        "Trumpf",
        "tüfteln",
        "Turban",
        "Turm",
        "Übermut",
        "Ufer",
        "Uhrwerk",
        "umarmen",
        "Umbau",
        "Umfeld",
        "Umgang",
        "Umsturz",
        "Unart",
        "Unfug",
        "Unimog",
        "Unruhe",
        "Unwucht",
        "Uranerz",
        "Urlaub",
        "Urmensch",
        "Utopie",
        "Vakuum",
        "Valuta",
        "Vandale",
        "Vase",
        "Vektor",
        "Ventil",
        "Verb",
        "Verdeck",
        "Verfall",
        "Vergaser",
        "verhexen",
        "Verlag",
        "Vers",
        "Vesper",
        "Vieh",
        "Viereck",
        "Vinyl",
        "Virus",
        "Vitrine",
        "Vollblut",
        "Vorbote",
        "Vorrat",
        "Vorsicht",
        "Vulkan",
        "Wachstum",
        "Wade",
        "Wagemut",
        "Wahlen",
        "Wahrheit",
        "Wald",
        "Walhai",
        "Wallach",
        "Walnuss",
        "Walzer",
        "wandeln",
        "Wanze",
        "wärmen",
        "Warnruf",
        "Wäsche",
        "Wasser",
        "Weberei",
        "wechseln",
        "Wegegeld",
        "wehren",
        "Weiher",
        "Weinglas",
        "Weißbier",
        "Weitwurf",
        "Welle",
        "Weltall",
        "Werkbank",
        "Werwolf",
        "Wetter",
        "wiehern",
        "Wildgans",
        "Wind",
        "Wohl",
        "Wohnort",
        "Wolf",
        "Wollust",
        "Wortlaut",
        "Wrack",
        "Wunder",
        "Wurfaxt",
        "Wurst",
        "Yacht",
        "Yeti",
        "Zacke",
        "Zahl",
        "zähmen",
        "Zahnfee",
        "Zäpfchen",
        "Zaster",
        "Zaumzeug",
        "Zebra",
        "zeigen",
        "Zeitlupe",
        "Zellkern",
        "Zeltdach",
        "Zensor",
        "Zerfall",
        "Zeug",
        "Ziege",
        "Zielfoto",
        "Zimteis",
        "Zobel",
        "Zollhund",
        "Zombie",
        "Zöpfe",
        "Zucht",
        "Zufahrt",
        "Zugfahrt",
        "Zugvogel",
        "Zündung",
        "Zweck",
        "Zyklop"
      };
      set_words(words);
      populate_maps();
    }
  };
}

#endif
