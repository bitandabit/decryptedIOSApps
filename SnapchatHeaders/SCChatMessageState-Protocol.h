//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol SCChatMessageState

@optional
- (_Bool)shouldBeAddedAgainGivenClearedDictionary:(NSDictionary *)arg1;
- (_Bool)savedByUser;
- (_Bool)releasedByUser;
- (_Bool)isPreserved;
- (unsigned long long)saveVersionOf:(NSString *)arg1;
- (NSDictionary *)savedState;
- (_Bool)isSaved;
- (_Bool)isSavedBy:(NSString *)arg1;
- (NSDictionary *)releaseState;
- (_Bool)isReleased;
- (_Bool)isReleasedBy:(NSString *)arg1;
- (NSString *)consistentId;
@end

