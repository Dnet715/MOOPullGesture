//
//  PullToCreateDataSource.h
//  MOOPullGesture Demo
//
//  Created by Peyton Randolph on 2/21/12.
//

#import <UIKit/UIKit.h>

@interface PullToCreateDataSource : NSObject <UITableViewDataSource>
{
    NSMutableArray *_phrases;
    NSUInteger _numberOfRows;
}

@property (nonatomic, assign) NSUInteger numberOfRows;

@end
