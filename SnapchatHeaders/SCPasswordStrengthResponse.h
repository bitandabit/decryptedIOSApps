//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCPasswordStrengthResponse : NSObject
{
    _Bool _savable;
    NSString *_strength;
    NSString *_message;
}

@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool savable; // @synthesize savable=_savable;
@property(retain, nonatomic) NSString *strength; // @synthesize strength=_strength;
- (void).cxx_destruct;

@end

