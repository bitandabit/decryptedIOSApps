//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCBasePacket.h"

@class NSString;

@interface MSCPacketVehicleData : MSCBasePacket
{
    unsigned int _key;
    NSString *_jsonValue;
}

@property(retain) NSString *jsonValue; // @synthesize jsonValue=_jsonValue;
@property unsigned int key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
