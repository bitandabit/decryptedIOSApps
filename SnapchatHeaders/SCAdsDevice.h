//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCAdsDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceLanguage; // @dynamic deviceLanguage;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(copy, nonatomic) NSData *idfa; // @dynamic idfa;
@property(nonatomic) long long osVersionNumeric; // @dynamic osVersionNumeric;
@property(nonatomic) int platformType; // @dynamic platformType;
@property(nonatomic) _Bool soundIsOn; // @dynamic soundIsOn;

@end

