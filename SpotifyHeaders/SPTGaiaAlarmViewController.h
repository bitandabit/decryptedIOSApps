//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SPTGaiaAlarmView, SPTGaiaDevice;

@interface SPTGaiaAlarmViewController : UIViewController
{
    SPTGaiaDevice *_device;
    SPTGaiaAlarmView *_alarmView;
}

@property(retain, nonatomic) SPTGaiaAlarmView *alarmView; // @synthesize alarmView=_alarmView;
@property(retain, nonatomic) SPTGaiaDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)arg1;
- (id)alarmForDevice:(id)arg1;
- (void)configureConstraints;
- (void)viewDidLoad;
- (id)initWithDevice:(id)arg1;

@end

