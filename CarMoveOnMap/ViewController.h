//
//  ViewController.h
//  CarMoveOnMap
//
//  Created by WOS on 01/06/18.
//  Copyright © 2018 WOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>
#import "CarMoveOnMap-Swift.h"

@interface ViewController : UIViewController <GMSMapViewDelegate>
{
  GMSMarker *driverMarker;

}

@property (strong, nonatomic) NSMutableArray *CoordinateArr;
@property (strong, nonatomic) GMSMapView *mapView;
@property CLLocationCoordinate2D oldCoordinate;
@property (weak, nonatomic) NSTimer *timer;
@property NSInteger counter;

@end

