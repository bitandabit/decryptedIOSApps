//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NBPhoneNumberDesc : NSObject
{
    NSString *nationalNumberPattern;
    NSString *possibleNumberPattern;
    NSString *exampleNumber;
}

@property(retain, nonatomic) NSString *exampleNumber; // @synthesize exampleNumber;
@property(retain, nonatomic) NSString *possibleNumberPattern; // @synthesize possibleNumberPattern;
@property(retain, nonatomic) NSString *nationalNumberPattern; // @synthesize nationalNumberPattern;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;

@end

