int p;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    p = Serial.read();
    if (p == 'T') {
      mae();
    }
    if (p == 'S') {
      usiro();
    }
  }
}

void mae() {
  digitalWrite(13, HIGH);
  delay(52);
  digitalWrite(13, LOW);
  delay(82);
  digitalWrite(13, HIGH);
  delay(85);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(633);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(551);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(616);
  digitalWrite(13, HIGH);
  delay(32);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(484);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(683);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(534);
  digitalWrite(13, HIGH);
  delay(32);
  digitalWrite(13, LOW);
  delay(634);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(517);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(667);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(316);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(668);
  digitalWrite(13, HIGH);
  delay(32);
  digitalWrite(13, LOW);
  delay(716);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(685);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(649);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(16771);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(116);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(135);
  digitalWrite(13, HIGH);
  delay(48);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(69);
  digitalWrite(13, LOW);
  delay(131);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(1850);
  digitalWrite(13, HIGH);
  delay(284);
  digitalWrite(13, LOW);
  delay(1900);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(136);
  digitalWrite(13, HIGH);
  delay(48);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(151);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(116);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(48);
  digitalWrite(13, LOW);
  delay(135);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(132);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(132);
  digitalWrite(13, HIGH);
  delay(69);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(132);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(116);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(101);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(66);
  digitalWrite(13, HIGH);
  delay(134);
  digitalWrite(13, LOW);
  delay(232);
  digitalWrite(13, HIGH);
  delay(168);
  digitalWrite(13, LOW);
  delay(215);
  digitalWrite(13, HIGH);
  delay(150);
  digitalWrite(13, LOW);
  delay(202);
  digitalWrite(13, HIGH);
  delay(183);
  digitalWrite(13, LOW);
  delay(199);
  digitalWrite(13, HIGH);
  delay(1167);
  digitalWrite(13, LOW);
  delay(199);
  digitalWrite(13, HIGH);
  delay(183);
  digitalWrite(13, LOW);
  delay(168);
  digitalWrite(13, HIGH);
  delay(167);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(800);
  digitalWrite(13, LOW);
  delay(2899);
  digitalWrite(13, HIGH);
  delay(119);
  digitalWrite(13, LOW);
  delay(1866);
  digitalWrite(13, HIGH);
  delay(116);
  digitalWrite(13, LOW);
  delay(1467);
  digitalWrite(13, HIGH);
  delay(118);
  digitalWrite(13, LOW);
}

void usiro() {
  digitalWrite(13, HIGH);
  delay(117);
  digitalWrite(13, LOW);
  delay(533);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(568);
  digitalWrite(13, HIGH);
  delay(150);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(532);
  digitalWrite(13, HIGH);
  delay(118);
  digitalWrite(13, LOW);
  delay(533);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(584);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(600);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(633);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(667);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(600);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(585);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(582);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(567);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(600);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(583);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(601);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(1251);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(584);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(615);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(616);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(599);
  digitalWrite(13, HIGH);
  delay(70);
  digitalWrite(13, LOW);
  delay(632);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(568);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(267);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(284);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(249);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(248);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(233);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(251);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(266);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(266);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(234);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(284);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(234);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(350);
  digitalWrite(13, HIGH);
  delay(20837);
  digitalWrite(13, LOW);
  delay(45088);
  digitalWrite(13, HIGH);
  delay(21987);
  digitalWrite(13, LOW);
  delay(300);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(350);
  digitalWrite(13, HIGH);
  delay(151);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(166);
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);
  delay(166);
  digitalWrite(13, LOW);
  delay(302);
  digitalWrite(13, HIGH);
  delay(166);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(101);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(133);
  digitalWrite(13, LOW);
  delay(366);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(366);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(149);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(184);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(166);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(165);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(184);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(187);
  digitalWrite(13, HIGH);
  delay(65);
  digitalWrite(13, LOW);
  delay(166);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(65);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(3316);
  digitalWrite(13, HIGH);
  delay(151);
  digitalWrite(13, LOW);
  delay(899);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(817);
  digitalWrite(13, HIGH);
  delay(150);
  digitalWrite(13, LOW);
  delay(800);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(900);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(900);
  digitalWrite(13, HIGH);
  delay(101);
  digitalWrite(13, LOW);
  delay(833);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(816);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(867);
  digitalWrite(13, HIGH);
  delay(99);
  digitalWrite(13, LOW);
  delay(850);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(950);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(883);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(850);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(935);
  digitalWrite(13, HIGH);
  delay(16);
  digitalWrite(13, LOW);
  delay(899);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(850);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(451);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(365);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(401);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(401);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(433);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(449);
  digitalWrite(13, HIGH);
  delay(18);
  digitalWrite(13, LOW);
  delay(449);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(452);
  digitalWrite(13, HIGH);
  delay(15);
  digitalWrite(13, LOW);
  delay(468);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(436);
  digitalWrite(13, HIGH);
  delay(30);
  digitalWrite(13, LOW);
  delay(468);
  digitalWrite(13, HIGH);
  delay(16);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(184);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(182);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(184);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(199);
  digitalWrite(13, HIGH);
  delay(35);
  digitalWrite(13, LOW);
  delay(199);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(184);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(1966);
  digitalWrite(13, LOW);
  delay(1402);
  digitalWrite(13, HIGH);
  delay(15);
  digitalWrite(13, LOW);
  delay(435);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(433);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(384);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(415);
  digitalWrite(13, HIGH);
  delay(70);
  digitalWrite(13, LOW);
  delay(414);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(451);
  digitalWrite(13, HIGH);
  delay(16);
  digitalWrite(13, LOW);
  delay(401);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(383);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(468);
  digitalWrite(13, HIGH);
  delay(16);
  digitalWrite(13, LOW);
  delay(416);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(434);
  digitalWrite(13, HIGH);
  delay(65);
  digitalWrite(13, LOW);
  delay(385);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(18);
  digitalWrite(13, LOW);
  delay(482);
  digitalWrite(13, HIGH);
  delay(18);
  digitalWrite(13, LOW);
  delay(449);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(434);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(467);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(383);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(365);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(484);
  digitalWrite(13, HIGH);
  delay(16);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(434);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(433);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(401);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(468);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(416);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(467);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(467);
  digitalWrite(13, HIGH);
  delay(17);
  digitalWrite(13, LOW);
  delay(416);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(385);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(384);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(65);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(37);
  digitalWrite(13, LOW);
  delay(398);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(418);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(434);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(366);
  digitalWrite(13, HIGH);
  delay(151);
  digitalWrite(13, LOW);
  delay(316);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(433);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(368);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(384);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(415);
  digitalWrite(13, HIGH);
  delay(68);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(384);
  digitalWrite(13, HIGH);
  delay(166);
  digitalWrite(13, LOW);
  delay(285);
  digitalWrite(13, HIGH);
  delay(199);
  digitalWrite(13, LOW);
  delay(266);
  digitalWrite(13, HIGH);
  delay(1318);
  digitalWrite(13, LOW);
  delay(185);
  digitalWrite(13, HIGH);
  delay(48);
  digitalWrite(13, LOW);
  delay(166);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(185);
  digitalWrite(13, HIGH);
  delay(1299);
  digitalWrite(13, LOW);
  delay(67);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(1350);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(119);
  digitalWrite(13, HIGH);
  delay(64);
  digitalWrite(13, LOW);
  delay(201);
  digitalWrite(13, HIGH);
  delay(1249);
  digitalWrite(13, LOW);
  delay(135);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(151);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(365);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(134);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(217);
  digitalWrite(13, HIGH);
  delay(416);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(166);
  digitalWrite(13, HIGH);
  delay(350);
  digitalWrite(13, LOW);
  delay(152);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(99);
  digitalWrite(13, LOW);
  delay(152);
  digitalWrite(13, HIGH);
  delay(365);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(166);
  digitalWrite(13, HIGH);
  delay(367);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(334);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(182);
  digitalWrite(13, HIGH);
  delay(418);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(151);
  digitalWrite(13, HIGH);
  delay(117);
  digitalWrite(13, LOW);
  delay(199);
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(717);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(832);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(900);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(884);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(933);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(834);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(917);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(784);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(450);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(466);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(416);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(383);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(484);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(367);
  digitalWrite(13, HIGH);
  delay(82);
  digitalWrite(13, LOW);
  delay(417);
  digitalWrite(13, HIGH);
  delay(35);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(167);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(165);
  digitalWrite(13, HIGH);
  delay(101);
  digitalWrite(13, LOW);
  delay(150);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(1433);
  digitalWrite(13, LOW);
  delay(470);
  digitalWrite(13, HIGH);
  delay(197);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(135);
  digitalWrite(13, LOW);
  delay(315);
  digitalWrite(13, HIGH);
  delay(185);
  digitalWrite(13, LOW);
  delay(266);
  digitalWrite(13, HIGH);
  delay(267);
  digitalWrite(13, LOW);
  delay(217);
  digitalWrite(13, HIGH);
  delay(217);
  digitalWrite(13, LOW);
  delay(299);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(201);
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);
  delay(233);
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);
  delay(167);
  digitalWrite(13, LOW);
  delay(301);
  digitalWrite(13, HIGH);
  delay(149);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(134);
  digitalWrite(13, LOW);
  delay(317);
  digitalWrite(13, HIGH);
  delay(166);
  digitalWrite(13, LOW);
  delay(300);
  digitalWrite(13, HIGH);
  delay(168);
  digitalWrite(13, LOW);
  delay(316);
  digitalWrite(13, HIGH);
  delay(183);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(134);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(133);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(151);
  digitalWrite(13, LOW);
  delay(333);
  digitalWrite(13, HIGH);
  delay(183);
  digitalWrite(13, LOW);
  delay(267);
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(267);
  digitalWrite(13, HIGH);
  delay(150);
  digitalWrite(13, LOW);
  delay(317);
  digitalWrite(13, HIGH);
  delay(183);
  digitalWrite(13, LOW);
  delay(267);
  digitalWrite(13, HIGH);
  delay(217);
  digitalWrite(13, LOW);
  delay(282);
  digitalWrite(13, HIGH);
  delay(251);
  digitalWrite(13, LOW);
  delay(182);
  digitalWrite(13, HIGH);
  delay(235);
  digitalWrite(13, LOW);
  delay(233);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(317);
  digitalWrite(13, HIGH);
  delay(234);
  digitalWrite(13, LOW);
  delay(265);
  digitalWrite(13, HIGH);
  delay(167);
  digitalWrite(13, LOW);
  delay(267);
  digitalWrite(13, HIGH);
  delay(168);
  digitalWrite(13, LOW);
  delay(365);
  digitalWrite(13, HIGH);
  delay(883);
  digitalWrite(13, LOW);
  delay(1385);
  digitalWrite(13, HIGH);
  delay(233);
  digitalWrite(13, LOW);
  delay(251);
  digitalWrite(13, HIGH);
  delay(167);
  digitalWrite(13, LOW);
  delay(315);
  digitalWrite(13, HIGH);
  delay(117);
  digitalWrite(13, LOW);
  delay(283);
  digitalWrite(13, HIGH);
  delay(101);
  digitalWrite(13, LOW);
  delay(232);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(218);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(700);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(534);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(668);
  digitalWrite(13, HIGH);
  delay(32);
  digitalWrite(13, LOW);
  delay(133);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(667);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(667);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(116);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(584);
  digitalWrite(13, HIGH);
  delay(32);
  digitalWrite(13, LOW);
  delay(634);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(101);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(566);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(683);
  digitalWrite(13, HIGH);
  delay(35);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(533);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(633);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(518);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(633);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(101);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(499);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(716);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(566);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(666);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(83);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(550);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(601);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(83);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(550);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(683);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(566);
  digitalWrite(13, HIGH);
  delay(51);
  digitalWrite(13, LOW);
  delay(683);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(101);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(667);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(566);
  digitalWrite(13, HIGH);
  delay(34);
  digitalWrite(13, LOW);
  delay(651);
  digitalWrite(13, HIGH);
  delay(49);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(83);
  digitalWrite(13, LOW);
  delay(550);
  digitalWrite(13, HIGH);
  delay(85);
  digitalWrite(13, LOW);
  delay(683);
  digitalWrite(13, HIGH);
  delay(33);
  digitalWrite(13, LOW);
  delay(117);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(183);
  digitalWrite(13, HIGH);
  delay(11934);
  digitalWrite(13, LOW);
  delay(383);
  digitalWrite(13, HIGH);
  delay(35);
  digitalWrite(13, LOW);
  delay(99);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(67);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(101);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(83);
  digitalWrite(13, HIGH);
  delay(66);
  digitalWrite(13, LOW);
  delay(67);
  digitalWrite(13, HIGH);
  delay(84);
  digitalWrite(13, LOW);
  delay(84);
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(118);
  digitalWrite(13, HIGH);
  delay(64);
  digitalWrite(13, LOW);
}