//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTHUBCustomUtilityIdentifierRegistry <NSObject>
- (NSString *)loggerIdentifierForFeatureIdentifier:(NSString *)arg1;
- (NSString *)playerIdentifierForFeatureIdentifier:(NSString *)arg1;
- (void)registerLoggerIdentifier:(NSString *)arg1 forFeatureIdentifier:(NSString *)arg2;
- (void)registerPlayerIdentifier:(NSString *)arg1 forFeatureIdentifier:(NSString *)arg2;
@end

