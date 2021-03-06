-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: May 09, 2015 at 02:30 AM
-- Server version: 5.6.17
-- PHP Version: 5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `myhms`
--

-- --------------------------------------------------------

--
-- Table structure for table `building`
--

CREATE TABLE IF NOT EXISTS `building` (
  `b_id` int(3) NOT NULL AUTO_INCREMENT,
  `b_name` varchar(30) NOT NULL,
  `street_no` int(3) NOT NULL,
  `street_name` varchar(30) NOT NULL,
  `building_no` int(3) NOT NULL,
  `floor_no` int(3) NOT NULL,
  `room_no` int(3) NOT NULL,
  `sup_no` int(3) NOT NULL,
  PRIMARY KEY (`b_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=8 ;

--
-- Dumping data for table `building`
--

INSERT INTO `building` (`b_id`, `b_name`, `street_no`, `street_name`, `building_no`, `floor_no`, `room_no`, `sup_no`) VALUES
(1, 'Zahraa', 30, 'Ali', 3, 3, 11, 3),
(2, 'A', 1, 'Aname', 1, 3, 8, 2),
(3, 'C ', 4, 'Cname', 4, 4, 4, 4),
(7, 'No Selected', 0, 'NULL', 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `daily_needs`
--

CREATE TABLE IF NOT EXISTS `daily_needs` (
  `dn_id` int(2) NOT NULL AUTO_INCREMENT,
  `type` varchar(20) DEFAULT NULL,
  `other_type` varchar(20) DEFAULT NULL,
  `text` varchar(100) DEFAULT NULL,
  `type_dn` varchar(20) NOT NULL,
  `sup_id` int(7) DEFAULT NULL,
  PRIMARY KEY (`dn_id`),
  KEY `sup_id` (`sup_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=7 ;

--
-- Dumping data for table `daily_needs`
--

INSERT INTO `daily_needs` (`dn_id`, `type`, `other_type`, `text`, `type_dn`, `sup_id`) VALUES
(1, NULL, NULL, '<p><strong>Test</strong>&nbsp;Daily document</p>\r\n', 'daily', 211),
(2, 'Water', NULL, 'students need water ', 'need', 212),
(4, NULL, NULL, '<p><strong>Test&nbsp;</strong></p>\r\n', 'daily', 212),
(5, NULL, 'food', 'fruit', 'need', 211),
(6, NULL, NULL, '<p>ya rab</p>\r\n', 'daily', 211);

-- --------------------------------------------------------

--
-- Table structure for table `fines_penalties`
--

CREATE TABLE IF NOT EXISTS `fines_penalties` (
  `fp_id` int(2) NOT NULL AUTO_INCREMENT,
  `id` int(7) NOT NULL,
  `value` int(3) NOT NULL,
  `type` varchar(10) NOT NULL,
  `reason` varchar(100) NOT NULL,
  PRIMARY KEY (`fp_id`),
  KEY `id` (`id`),
  KEY `id_2` (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=19 ;

--
-- Dumping data for table `fines_penalties`
--

INSERT INTO `fines_penalties` (`fp_id`, `id`, `value`, `type`, `reason`) VALUES
(16, 3113760, 0, '1', ''),
(18, 3113731, 0, 'penalty', '');

-- --------------------------------------------------------

--
-- Table structure for table `permission`
--

CREATE TABLE IF NOT EXISTS `permission` (
  `permission_id` int(2) NOT NULL AUTO_INCREMENT,
  `permission_name` varchar(30) NOT NULL,
  PRIMARY KEY (`permission_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=12 ;

--
-- Dumping data for table `permission`
--

INSERT INTO `permission` (`permission_id`, `permission_name`) VALUES
(1, 'Housing Request'),
(2, 'Move Request'),
(3, 'Renew Request'),
(4, 'View Penalties/Fines'),
(5, 'send Daily Documents'),
(6, 'send Special Needs Housing	'),
(7, 'View Housing Request'),
(8, 'Accept/Reject Student in House'),
(9, 'View Daily Documents'),
(10, 'View Special Needs Housing'),
(11, 'Fill Penalties/Fines');

-- --------------------------------------------------------

--
-- Table structure for table `request`
--

CREATE TABLE IF NOT EXISTS `request` (
  `type` varchar(10) NOT NULL,
  `status` int(2) DEFAULT '0',
  `text` varchar(45) DEFAULT NULL,
  `date` date DEFAULT NULL,
  `want_want_not` varchar(10) DEFAULT NULL,
  `room_capacity` int(11) DEFAULT NULL,
  `user_id` int(11) DEFAULT NULL,
  `b_id` int(11) DEFAULT NULL,
  `request_id` int(11) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`request_id`),
  KEY `user_id` (`user_id`),
  KEY `building_b_id` (`b_id`),
  KEY `b_id` (`b_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=14 ;

--
-- Dumping data for table `request`
--

INSERT INTO `request` (`type`, `status`, `text`, `date`, `want_want_not`, `room_capacity`, `user_id`, `b_id`, `request_id`) VALUES
('house', 1, NULL, '2015-04-28', NULL, 3, 3113731, 1, 5),
('renew', 1, 'ggg', '2015-05-08', 'want ', NULL, 3113760, NULL, 13);

-- --------------------------------------------------------

--
-- Table structure for table `role`
--

CREATE TABLE IF NOT EXISTS `role` (
  `role_id` int(2) NOT NULL AUTO_INCREMENT,
  `role_name` varchar(30) NOT NULL,
  PRIMARY KEY (`role_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `role`
--

INSERT INTO `role` (`role_id`, `role_name`) VALUES
(1, 'students'),
(2, 'supervisor'),
(3, 'housing department'),
(4, 'no role');

-- --------------------------------------------------------

--
-- Table structure for table `role_has_permission`
--

CREATE TABLE IF NOT EXISTS `role_has_permission` (
  `role_role_id` int(11) NOT NULL,
  `permission_permission_id` int(11) NOT NULL,
  PRIMARY KEY (`role_role_id`,`permission_permission_id`),
  KEY `fk_role_has_permission_permission1_idx` (`permission_permission_id`),
  KEY `fk_role_has_permission_role1_idx` (`role_role_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `role_has_permission`
--

INSERT INTO `role_has_permission` (`role_role_id`, `permission_permission_id`) VALUES
(1, 1),
(1, 2),
(1, 3),
(1, 4),
(1, 5),
(2, 6),
(2, 7),
(3, 8),
(3, 9),
(3, 10),
(1, 11),
(3, 11);

-- --------------------------------------------------------

--
-- Table structure for table `student_profile`
--

CREATE TABLE IF NOT EXISTS `student_profile` (
  `national_id` int(11) NOT NULL,
  `date_of_birth` varchar(45) NOT NULL,
  `place_of_birth` varchar(45) NOT NULL,
  `religion` varchar(45) NOT NULL,
  `nationality` varchar(45) NOT NULL,
  `faculty` varchar(45) NOT NULL,
  `department` varchar(45) NOT NULL,
  `guardian_name` varchar(45) NOT NULL,
  `guardian_phone` varchar(45) NOT NULL,
  `user_id` int(11) NOT NULL,
  PRIMARY KEY (`national_id`),
  KEY `id` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `student_profile`
--

INSERT INTO `student_profile` (`national_id`, `date_of_birth`, `place_of_birth`, `religion`, `nationality`, `faculty`, `department`, `guardian_name`, `guardian_phone`, `user_id`) VALUES
(993, '26/11/1993', 'aqaba', 'Eslam', 'Jordain', 'IT', 'CIS', 'Mohammad', '078', 3113731);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `id` int(11) NOT NULL,
  `first_name` varchar(45) NOT NULL,
  `middle_name` varchar(45) NOT NULL,
  `last_name` varchar(45) NOT NULL,
  `city` varchar(45) NOT NULL,
  `state` varchar(45) NOT NULL,
  `residential_area` varchar(45) DEFAULT NULL,
  `phone` varchar(45) DEFAULT NULL,
  `b_id` int(11) DEFAULT NULL,
  `pass` varchar(45) CHARACTER SET latin1 COLLATE latin1_bin NOT NULL,
  `role_id` int(2) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `b_id` (`b_id`),
  KEY `state` (`state`),
  KEY `role_id` (`role_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id`, `first_name`, `middle_name`, `last_name`, `city`, `state`, `residential_area`, `phone`, `b_id`, `pass`, `role_id`) VALUES
(211, 'Sanaa', 'Fadel ', 'Taj', 'Amman', 'Amman', 'jubeiha ', '0789456123 ', 1, '40bd001563085fc35165329ea1ff5c5ecbdbbeef', 2),
(212, 'Mariam', 'ahmad', 'Naje', 'Irbid', 'Irbid', ' Irbid', ' 0791452360', 3, '40bd001563085fc35165329ea1ff5c5ecbdbbeef', 2),
(3113714, 'Samah', 'Taj', 'Shaat', 'amman', 'aqaba', 'third area       ', '0789621447', NULL, '40bd001563085fc35165329ea1ff5c5ecbdbbeef', 3),
(3113731, 'lina', 'mohammad', 'houssonesh ', 'aqaba', 'amman', 'Al-almeh', '078521479 ', 1, '40bd001563085fc35165329ea1ff5c5ecbdbbeef', 4),
(3113760, 'Sokaina', 'Mousa', 'Alhtibat', 'aqaba', 'aqaba', 'Al-kazan             ', '0787954621', 1, '40bd001563085fc35165329ea1ff5c5ecbdbbeef', 1),
(3114405, 'eslam', 'taeseer', 'alashhab', 'Amman', 'aqaba', 'sixth area', '0796325874', NULL, '40bd001563085fc35165329ea1ff5c5ecbdbbeef', 1);

-- --------------------------------------------------------

--
-- Table structure for table `user_has_role`
--

CREATE TABLE IF NOT EXISTS `user_has_role` (
  `user_id` int(11) NOT NULL,
  `role_role_id` int(11) NOT NULL,
  PRIMARY KEY (`user_id`,`role_role_id`),
  KEY `fk_user_has_role_role1_idx` (`role_role_id`),
  KEY `fk_user_has_role_user1_idx` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user_has_role`
--

INSERT INTO `user_has_role` (`user_id`, `role_role_id`) VALUES
(3113731, 1),
(3113760, 1),
(3114405, 1),
(211, 2),
(212, 2),
(3113714, 3);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `daily_needs`
--
ALTER TABLE `daily_needs`
  ADD CONSTRAINT `daily_needs_ibfk_1` FOREIGN KEY (`sup_id`) REFERENCES `user` (`id`);

--
-- Constraints for table `fines_penalties`
--
ALTER TABLE `fines_penalties`
  ADD CONSTRAINT `fines_penalties_ibfk_1` FOREIGN KEY (`id`) REFERENCES `user` (`id`);

--
-- Constraints for table `request`
--
ALTER TABLE `request`
  ADD CONSTRAINT `request_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`),
  ADD CONSTRAINT `request_ibfk_2` FOREIGN KEY (`b_id`) REFERENCES `building` (`b_id`);

--
-- Constraints for table `role_has_permission`
--
ALTER TABLE `role_has_permission`
  ADD CONSTRAINT `fk_role_has_permission_permission1` FOREIGN KEY (`permission_permission_id`) REFERENCES `permission` (`permission_id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_role_has_permission_role1` FOREIGN KEY (`role_role_id`) REFERENCES `role` (`role_id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `student_profile`
--
ALTER TABLE `student_profile`
  ADD CONSTRAINT `student_profile_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`);

--
-- Constraints for table `user`
--
ALTER TABLE `user`
  ADD CONSTRAINT `user_ibfk_1` FOREIGN KEY (`b_id`) REFERENCES `building` (`b_id`),
  ADD CONSTRAINT `user_ibfk_2` FOREIGN KEY (`role_id`) REFERENCES `role` (`role_id`);

--
-- Constraints for table `user_has_role`
--
ALTER TABLE `user_has_role`
  ADD CONSTRAINT `fk_user_has_role_role1` FOREIGN KEY (`role_role_id`) REFERENCES `role` (`role_id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_user_has_role_user1` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
