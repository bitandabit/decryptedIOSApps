//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCUserProperties_DEPRECATED : NSObject
{
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)userSpecificKeyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1 immediate:(_Bool)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2 immediate:(_Bool)arg3;
- (id)propertyForKey:(id)arg1;
- (id)initWithUsername:(id)arg1;

@end

