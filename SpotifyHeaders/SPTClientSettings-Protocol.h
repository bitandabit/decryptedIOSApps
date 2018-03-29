//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTClientSettings <NSObject>
@property(nonatomic) _Bool connectDisabled;
@property(nonatomic) _Bool hideUnplayableTracks;
@property(readonly, copy, nonatomic) NSString *lastfmPasswordHash;
@property(copy, nonatomic) NSString *lastfmUsername;
@property(nonatomic) _Bool lastfmEnabled;
@property(nonatomic) _Bool shuffle;
- (void)setLastfmPassword:(NSString *)arg1;
@end
