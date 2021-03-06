//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContact-Protocol.h"

@class NSString;

@interface SCContact : NSObject <SCContact>
{
    NSString *_display;
    NSString *_phoneNumber;
}

@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *display; // @synthesize display=_display;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplay:(id)arg1 phoneNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

