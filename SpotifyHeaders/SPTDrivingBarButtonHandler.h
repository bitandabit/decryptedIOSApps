//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTDrivingBarButtonHandler : NSObject
{
    _Bool _drivingBarButtonEnabled;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTDrivingBarButtonHandlerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTDrivingBarButtonHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(nonatomic) _Bool drivingBarButtonEnabled; // @synthesize drivingBarButtonEnabled=_drivingBarButtonEnabled;
- (void).cxx_destruct;
- (void)didTapDrivingBarButton;
- (void)unregisterDrivingBarButtonItem;
- (void)registerDrivingBarButtonItem;
- (void)dealloc;
- (id)initWithBarButtonItemManager:(id)arg1 delegate:(id)arg2;

@end
