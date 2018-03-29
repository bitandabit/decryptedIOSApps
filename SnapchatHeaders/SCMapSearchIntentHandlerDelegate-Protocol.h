//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMTFriendLocation, SCMapPerson, SCMapSearchIntentHandler;

@protocol SCMapSearchIntentHandlerDelegate <NSObject>

@optional
- (void)mapSearchIntentHandler:(SCMapSearchIntentHandler *)arg1 wantsToShowMiniProfileForPerson:(SCMapPerson *)arg2;
- (void)mapSearchIntentHandler:(SCMapSearchIntentHandler *)arg1 wantsToGoToCoordinate:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(double)arg3 coordinateBounds:(struct MGLCoordinateBounds)arg4 useCoordinateBounds:(_Bool)arg5 withTitle:(NSString *)arg6 dropPin:(_Bool)arg7;
- (void)mapSearchIntentHandler:(SCMapSearchIntentHandler *)arg1 wantsToChatWithPerson:(SCMapPerson *)arg2;
- (void)mapSearchIntentHandler:(SCMapSearchIntentHandler *)arg1 didSelectFriendLocation:(SCMTFriendLocation *)arg2;
@end
