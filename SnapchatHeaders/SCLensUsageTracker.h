//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"

@class NSMutableSet, NSString, SCLens, SCUserSession;

@interface SCLensUsageTracker : NSObject <SCLensUIUpdateListener, LSAEffectComponentListener>
{
    SCUserSession *_userSession;
    SCLens *_selectedLens;
    NSMutableSet *_usedLensIds;
}

@property(retain, nonatomic) NSMutableSet *usedLensIds; // @synthesize usedLensIds=_usedLensIds;
- (void).cxx_destruct;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)willShowLenses;
- (void)willDisplayLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didHideLenses;
- (void)didEndDisplayingLens:(id)arg1;
- (_Bool)wasLensUsedBefore:(id)arg1;
- (void)trackLensWasUsed:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
