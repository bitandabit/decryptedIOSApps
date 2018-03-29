//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchMapGiveAccessCardDismisser-Protocol.h"
#import "SCSearchUpdateAnnouncing-Protocol.h"

@class NSString, SCSearchUpdateListenerAnnouncer;

@interface SCSearchMapGiveAccessCardDismissManager : NSObject <SCSearchMapGiveAccessCardDismisser, SCSearchUpdateAnnouncing>
{
    SCSearchUpdateListenerAnnouncer *_updateAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)canShowMapPreTypeCard;
- (void)willShowMapPreTypeCard;
- (_Bool)hasMapGiveAccessCardBeenDismissed;
- (void)mapGiveAccessCardNeedsToBeDismissed;
- (id)init;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
