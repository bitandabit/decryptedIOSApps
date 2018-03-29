//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCDataObjectContext, SCQueuePerformer;
@protocol SCGalleryProfile, SCObserving;

@interface SCGalleryProfileUserSessionHandler : NSObject
{
    id <SCGalleryProfile> _profile;
    SCQueuePerformer *_performer;
    id <SCObserving> _observeContext;
    SCDataObjectContext *_dataObjectContext;
    NSString *_userId;
    NSString *_username;
    NSString *_userEmail;
    long long _onceToken;
}

- (void).cxx_destruct;
- (void)_updateWithProfile:(id)arg1;
- (id)profile;
- (void)dealloc;
- (void)_setupGalleryProfileOnce;
- (id)initWithUserId:(id)arg1 username:(id)arg2 userEmail:(id)arg3;

@end
