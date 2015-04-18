-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 19, 2015 at 01:24 AM
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
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

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
  KEY `id` (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

-- --------------------------------------------------------

--
-- Table structure for table `permission`
--

CREATE TABLE IF NOT EXISTS `permission` (
  `permission_id` int(2) NOT NULL,
  `permission_name` varchar(30) NOT NULL,
  PRIMARY KEY (`permission_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

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
-- Table structure for table `role`
--

CREATE TABLE IF NOT EXISTS `role` (
  `role_id` int(2) NOT NULL,
  `role_name` varchar(30) NOT NULL,
  PRIMARY KEY (`role_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `role`
--

INSERT INTO `role` (`role_id`, `role_name`) VALUES
(1, 'student'),
(2, 'supervisor'),
(3, 'housing department');

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
  `fines_penalties_fp_id` int(11) DEFAULT NULL,
  `building_b_id` int(11) DEFAULT NULL,
  `student_profile_national_id` int(11) DEFAULT NULL,
  `pass` varchar(45) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id`, `first_name`, `middle_name`, `last_name`, `city`, `state`, `residential_area`, `phone`, `fines_penalties_fp_id`, `building_b_id`, `student_profile_national_id`, `pass`) VALUES
(3113714, 'Samah', 'Taj', 'Shaat', 'amman', 'aqaba', NULL, NULL, NULL, NULL, NULL, '123'),
(3113731, 'lina', 'mohammad', 'houssonesh ', 'aqaba', 'amman', '   ', '   ', NULL, NULL, NULL, '123'),
(3113760, 'Sokaina', 'Mousa', 'Alhtibat', 'aqaba', 'aqaba', '                    ', '                    ', NULL, NULL, NULL, '456');

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
(3113714, 1),
(3113760, 1);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `role_has_permission`
--
ALTER TABLE `role_has_permission`
  ADD CONSTRAINT `role_has_permission_ibfk_2` FOREIGN KEY (`permission_permission_id`) REFERENCES `permission` (`permission_id`),
  ADD CONSTRAINT `role_has_permission_ibfk_1` FOREIGN KEY (`role_role_id`) REFERENCES `role` (`role_id`);

--
-- Constraints for table `user_has_role`
--
ALTER TABLE `user_has_role`
  ADD CONSTRAINT `user_has_role_ibfk_2` FOREIGN KEY (`role_role_id`) REFERENCES `role` (`role_id`),
  ADD CONSTRAINT `user_has_role_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
