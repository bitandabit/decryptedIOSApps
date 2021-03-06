//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaContextMenuAction.h"

@class NSString, SPTGaiaDevice, SPTGaiaSavedDeviceManager;

@interface SPTGaiaContextMenuSetHomeDeviceAction : NSObject <SPTGaiaContextMenuAction>
{
    id <SPTGaiaContextMenuActionDelegate> _delegate;
    SPTGaiaDevice *_device;
    SPTGaiaSavedDeviceManager *_savedDeviceManager;
}

+ (id)featureIdentifier;
+ (id)featureTitle;
@property(retain, nonatomic) SPTGaiaSavedDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
@property(retain, nonatomic) SPTGaiaDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <SPTGaiaContextMenuActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)deviceIsSavedDevice;
@property(readonly, nonatomic) _Bool supportsAutomaticFiltering;
- (id)accessoryView;
- (id)performAction;
@property(readonly, nonatomic) _Bool available;
- (id)title;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSavedDeviceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

